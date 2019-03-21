# SSLEmail
Send e-mail to SMTP server, support SSL.
  
Using openssl 1.1.1b  
Windows socket2

### Direcotry

* SSLEmail/
  * main.cpp **demo**
  * SSLEmail.h **module header file**
  * SSLEmail.cpp **module source file**

### Class SSLEmailService
```c++
//SSLEmail.h
class SSLEmailService
{
public:
	std::string lastErrorMsg;
	struct EmailInfo
	{
		std::string smtpServer;      //the SMTP server
		std::string serverPort;      //the SMTP server port
		std::string charset;         //the IMF character set
		std::string sender;          //the sender's name
		std::string senderEmail;     //the sender's email
		std::string password;        //the password of sender
		std::string recipient;       //the recipient's name
		std::string recipientEmail;  //the recipient's email

		std::string MIMEContentType; //the message's content type;
		std::string subject;         //the email message's subject
		std::string message;         //the email message body

	};


	int SendEmail(const EmailInfo &info, bool useSSL);
};

```