#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void set_content_type(string content_type) 
{
  cout << "Content-type: " << content_type << "\r\n\r\n";
}
void set_page_title(string title) 
{
  cout << "<title>" << title << "</title>\n";
}

void bodyHtml()
{
  cout << "<!doctype html>\n";
  cout << "<html lang=\"en\">\n";
  cout << "<head>\n";  
  cout << "</head>\n";
  cout<<"<style>"
"  body{  "
"  margin:0;"
"  padding:0;"
"  background-image: url('vac4.jpg');"
"  background-size: cover;"
"  font-size:16px;"
""
"  font-family: 'Montserrat', sans-serif;"
"  font-weight:300;  "
"}"
""
"::placeholder{"
"  color: rgb(91, 13, 180);"
"  opacity: 1;"
"}"

"#login-box {"
"  position:relative;"
"  margin: 7% auto;"
"  height:350px;"
"  width:400px;"
"  background: #cbf513;"
"        background: -moz-linear-gradient(left, #cbf513 0%, #87a33b 100%);"
"        background: -webkit-linear-gradient(left, #cbf513 0%, #87a33b  100%);"
"        background: linear-gradient(to right, #cbf513 0%, #87a33b  100%);"
""
"    background: aliceblue;"
""
"  border-radius: 23px;"
"  box-shadow: 0 10px 90px rgba(0,0,0,0.6);"
"}"
/* .bg-image{
  background-image: url('corona.jpg');
  background-size: cover;
} */

".left-box {"
"  text-align: center;"
"  position:absolute;"
"  top:0%;"
"  left:0%;"
"  box-sizing: border-box;"
"  padding:40px;"
"  width:400px;"
"  height:500px;"
"}"
""
"h1{"
"  margin: 0.5% auto;"
"    text-align: center; "
"    color:rgb(233, 37, 12);"
"    text-shadow:2px 1px rgb(9, 230, 27);"
"    font-weight:700;"
"    font-size:1.2cm;"
"    /* text-decoration: underline; */"
"/* font-family: 'Architects Daughter', cursive; */"
"font-family: 'Kaushan Script', cursive;"
"/* font-family: 'Satisfy', cursive; */  "
"}"

"input[type='text'], input[type='password'] {"
"  text-align: left;    "
"  display:block;"
"  box-sizing:border-box;"
"  margin-bottom:20px;"
"  padding:4px;"
"  width:300px;"
"  height:32px;"
"  border:none;"
"  outline:none;"
"  border-bottom:1px solid rgb(110, 8, 8);"
""
"  "
"  font-family:sans-serif;"
"  font-weight:400;"
"  font-size:15px;"
"  transition: 0.2s ease;"
"  background: transparent;  "
"  border: 1px solid rgb(189, 9, 9) ;"
"  border-radius: 2px;"
"  color: rgb(2, 36, 17);"
"}"

"input[type='int'], input[type='age'] {"
"  text-align: left;"
"  display:block;"
"  box-sizing:border-box;"
"  margin-bottom:20px;"
"  padding:4px;"
"  width:300px;"
"  height:32px;"
"  border:none;"
"  outline:none;"
"  border-bottom:1px solid tan;"
"  font-family:sans-serif;"
"  font-weight:400;"
"  font-size:15px;"
"  transition: 0.2s ease;"
"  background: transparent;"
"  /* border: 1px solid tan; */"
"  border: 1px solid rgb(189, 9, 9) ;"
"  border-radius: 2px;"
"  /* color: #fff; */"
"}"
"input[type='submit'] {"
"  margin-bottom:28px;"
"  width:100px;"
"  height:32px;"
"  background:#dd2808;"
"  border:none;"
"  border-radius:2px;"
"  color:#fff;"
"  font-family:sans-serif;"
"  font-weight:500;"
"  text-transform:uppercase;"
"  transition:0.25s ease;"
"  cursor:pointer;"
"}"
"input[type='submit']:hover,input[type='submit']:focus {"
"  background:rgb(3, 182, 27);"
"  transition: 0.2s ease;"
"}"
"h6{"
  /* text-align: center;  */

"  color:rgb(14, 6, 129);"
"  /* text-shadow:2px 1px rgb(168, 167, 170);"
"  font-weight:300; */"
"  font-size:0.5cm;"
"  /* font-style: italic; */"
"}"
"</style>";

cout<<"<body>"
"<div id='login-box'>"
"    <div class='left-box'>      "
"      <h1> User's Login  </h1>"
"      <!-- <form method='GET' action='checkLogin.php'></form> -->"
"      <form method='POST' action='checkLogin.php'>"
"          <br>"
"      <input type='int' name='adhaar' placeholder='Enter your Adhaar Card Number'required/>"
"      <!-- <input type='int' name='age' placeholder='Enter your age'/> -->"
"      <input type='text' name='username' placeholder='Enter your Username' required/>"
"      <!-- <input type='date' name='date' placeholder='Date' required/> -->"
"      <input type='password' name='password' placeholder='Enter your Password' required/>"
""
"      <!-- <br> -->"
"      <!-- <br> -->"
"      <!-- <br> -->"
"      <input type='submit' name='singup-button' placeholder='Sign Up'/>"
"    </form>"
"    <br>"
"    <br>"
"    <!-- <br> -->"
"    <!-- <br> -->"
"    <!-- <br> -->"
"    <br>"
""
"    <a href='user.cgi'><h6><i>Haven't Registered Yet? Click here to Register</i></h6></a>"
// "    <!-- <a href='file:///F:\website XAMPP\cgi-bin1\new.cgi'><h6>file link</h6></a> -->"
"    <!-- URL.createObjectURL() -->"
"    <!-- const objectURL = URL.createObjectURL(object) -->"
// "    <!-- <a href="F:\website XAMPP\cgi-bin1\new.cgi" target="_brave.exe">Link Text</a> -->"
"  </div>"
"</div>"
"<!-- <script></script> -->"
"</body>"
"</html>";


}
int main() {
  set_content_type("text/html"); 
  set_page_title("User's login");  
  bodyHtml();
  return 0;
}