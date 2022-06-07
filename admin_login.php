<?php
 
  // servername => localhost
  // username => root
  // password => empty
  // database name => User
  $conn = mysqli_connect("localhost", "root", "", "User");
    
  // Check connection
  if($conn === false){
      die("ERROR: Could not connect. "
          . mysqli_connect_error());
  }
    
  // Taking all 5 values from the form data(input)
  // $i = 0;
  // $p_id = i++;
  $adhaar =  $_REQUEST['adhaar'];
  $username =  $_REQUEST['username'];
  $password = $_REQUEST['password'];
    
  // Performing insert query execution
  // here our table name is college
  $sql = "select *from registrationtable where adhaar = '$adhaar' and username = '$username' and password = '$password'";
    
  if(mysqli_query($conn, $sql)){
      // echo "<h3>data stored in a database successfully."
      //     . " Please browse your localhost php my admin"
      //     . " to view the updated data</h3>";

      // echo nl2br("\n$adhaar\n $age\n "
      //     . "$username\n $password \n $date \n $status");
      // echo "<a href='https://www.mygov.in/covid-19/' target='_blank'>Click here</a>";
      echo "<meta http-equiv='refresh' content=0;url='http://localhost/phpmyadmin/index.php?route=/sql&server=1&db=user&table=registrationtable&pos=0' />";
  
  } else{
      // echo "ERROR: Hush! Sorry $sql. "
      //     . mysqli_error($conn);
      echo "Please enter valid Details";
  }
    
  // Close connection
  mysqli_close($conn);
?>