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
 
  // servername => localhost
  // username => root
  // password => empty
  // database name => User
  $conn = mysqli_connect("localhost", "root", "", "user") or die ('MySQL 
  connect failed. ' . mysqli_error($conn));
    
  // Check connection
  if($conn === false){
      die("ERROR: Could not connect. "
          . mysqli_connect_error());

  }
include "login (1).php";
  // Taking all 5 values from the form data(input)
  // $i = 0;
  // $p_id = i++;
  $adhaar =  $_REQUEST['adhaar'];
  $username =  $_REQUEST['username'];
  $password = $_REQUEST['password'];
    
  // Performing insert query execution
  // here our table name is college
  //   $sql = "select *from registrationtable where adhaar = '$adhaar' and username = '$username' and password = '$password'";
  // $records = mysqli_query(mysqli_connect("localhost", "root", "", "user"),"SELECT * FROM `registrationtable` WHERE `adhaar` = $adhaar",100); // fetch data from database
  $records = "select *from registrationtable where adhaar = '$adhaar' and username = '$username' and password = '$password'";
  $comments = mysqli_query($conn,$records);
  
  if(!$comments)
  {   

      echo "$adhaar";
     
     

  }

    //   echo "<meta http-equiv='refresh' content=0;url='admin_display.php' />";

   else{
      // echo "ERROR: Hush! Sorry $sql. "
      //     . mysqli_error($conn);
      echo "Please enter valid Details";
  }
  while($data = mysqli_fetch_array($comments,MYSQLI_ASSOC))
  {

 
  ?>  
  <tr>
  <td><?php echo $data['adhaar']; ?></td>
  <td><?php echo $data['username']; ?></td>
  <td><?php echo $data['password']; ?></td>

</tr>
<?php
}
?>
</table>
</body>
</html>
<?php 
  // Close connection
  mysqli_close($conn);
?>