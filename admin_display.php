<!DOCTYPE html>
<html>
<head>
  <title>Display all records from Database</title>
</head>
<body>

<h2>Employee Details</h2>

<table border="2">
  <tr>
    <td>Sr.No.</td>
    <td>Full Name</td>
    <td>Age</td>
  </tr>

<?php    

include "admin.php";
include "admin_login.php";


$records = mysqli_query($db,"SELECT * FROM registrationtable WHERE adhaar = $adhaar"); // fetch data from database
echo "$adhaar";
while($data = mysqli_fetch_array($records))
{
  // if($adhaar == $data['adhaar'] ){

  // }


?>
  <tr>
    <td><?php echo $data['adhaar']; ?></td>
    <td><?php echo $data['age']; ?></td>
    <td><?php echo $data['username']; ?></td>

  </tr>	
<?php
}
?>
</table>

<?php mysqli_close($db); // Close connection ?>

</body>
</html>