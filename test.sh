best_fit() {
    local blocks=("$@")
    local files=(4 5 7)
    local allocation=()
    
    for file in "${files[@]}"; do
        best_index=-1
        for i in "${!blocks[@]}"; do
            if (( blocks[i] >= file )); then
                if (( best_index == -1 || blocks[i] < blocks[best_index] )); then
                    best_index=$i
                fi
            fi
        done
        if (( best_index != -1 )); then
            allocation+=($best_index)
            blocks[best_index]=$(( blocks[best_index] - file ))
        else
            allocation+=(-1)
        fi
    done
    
    echo "Best Fit Allocation:"
    for i in "${!files[@]}"; do
        if (( allocation[i] != -1 )); then
            echo "File $((i + 1)) of size ${files[i]} is allocated to Block $((allocation[i] + 1))"
        else
            echo "File $((i + 1)) of size ${files[i]} could not be allocated"
        fi
    done
}

blocks=(5 8 6 10)

echo "Blocks: ${blocks[@]}"
echo "Files: 4 5 7"

best_fit "${blocks[@]}"
