<?php
$conn = mysqli_connect('localhost', 'mahi', 'test1234', 'test');

$show=" "

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $subject = $_POST['subject'];
    $class = $_POST['class'];
    $salary = $_POST['salary'];
    $district = $_POST['district'];
    $thana = $_POST['thana'];

    
    $sql = "SELECT COUNT(*) as count FROM teacher 
            WHERE subject = '$subject' AND class >= '$class' AND district = '$district' 
            AND thana = '$thana' AND salary <= $salary";

    $result = $conn->query($sql);

    if ($result) {
        $row = $result->fetch_assoc();
        $row_count = $row['count'];

        if ($row_count > 0) {
            $data_query = "SELECT first_name, last_name, subject, class, salary, district, thana FROM teacher 
                           WHERE subject = '$subject' AND class >= '$class' AND district = '$district' 
                           AND thana = '$thana' AND salary <= $salary
                           ORDER BY salary ASC";

            $data_result = $conn->query($data_query);

            while ($row = $data_result->fetch_assoc()) {
                echo "First Name: " . htmlspecialchars($row["first_name"]) . "<br>";
                echo "Last Name: " . htmlspecialchars($row["last_name"]) . "<br>";
                echo "Subject: " . htmlspecialchars($row["subject"]) . "<br>";
                echo "Class: " . htmlspecialchars($row["class"]) . "<br>";
                echo "Salary: " . htmlspecialchars($row["salary"]) . "<br>";
                echo "District: " . htmlspecialchars($row["district"]) . "<br>";
                echo "Thana: " . htmlspecialchars($row["thana"]) . "<br><br>";
            }
        } else {
            echo "No results found.";
        }
    } else {
        echo "Error in query execution: " . $conn->error;
    }

    $conn->close();
}

?>



<!DOCTYPE html>
<html>
    <?php include("header.php"); ?>

    <section class="container gray-text">
        <h4 class="center">Input Search Info</h4>
        <form action="search.php" method="post">
            Subject: <input type="text" name="subject" pattern="[A-Za-z ]+" title="Only letters and spaces allowed"><br>
            Class: <input type="text" name="class" pattern="[1-9]|1[0-2]" title="Enter a number from 1 to 12"><br>
            Salary: <input type="text" name="salary" pattern="\d+" title="Only digits allowed"><br>
            District: <input type="text" name="district" pattern="[A-Za-z ]+" title="Only letters and spaces allowed"><br>
            Thana: <input type="text" name="thana" pattern="[A-Za-z ]+" title="Only letters and spaces allowed"><br>
            <input type="submit" value="Search">
        </form>
    </section>

    <?php include("footer.php"); ?>
</html>



_________________________________
here output is showing before from.how I can show it below form ?