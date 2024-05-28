function updateUi(callback,x){
    const interval =setInterval(callback,x);

    return function(){
        clearInterval(interval);
    }
}


function fetchData(){
    console.log('fetching data')
}


const update=updateUi(fetchData,1000);
update();