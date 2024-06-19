Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

	web_add_cookie("prodperfect_session={%22session_uuid%22:%22fb873bf9-ba06-44bd-b71e-f1b98923b4d8%22}; DOMAIN=blazedemo.com");

	web_add_cookie("keen={%22uuid%22:%226f4a8f6d-383b-4c13-86ff-36e8f2a45a31%22%2C%22initialReferrer%22:null}; DOMAIN=blazedemo.com");

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1718791029936\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_submit_form("reserve.php", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Paris", ENDITEM, 
		"Name=toPort", "Value=Rome", ENDITEM, 
		LAST);

	web_add_cookie("keen={%22uuid%22:%226f4a8f6d-383b-4c13-86ff-36e8f2a45a31%22%2C%22initialReferrer%22:%22https://blazedemo.com/%22}; DOMAIN=blazedemo.com");

	web_websocket_send("ID=1", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1718791029936\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_submit_form("purchase.php", 
		"Ordinal=2", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive0*/

	return 0;
}