#pragma once
#include <string>

int GetPageContent(const char * host, std::string &buffer, size_t maxReadLength);

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


