void Send_MAC_Frm(byte pkt[])
{
	if(pkt[12]==8 && pkt[13]==0)					//IP Type 
        if (pkt[23]==6)								//TCP Protocol
		    if (pkt[30]==1 && pkt[31]==2 &&			//Asked IP
		    	pkt[32]==3 && pkt[33]==4)
	        	if (pkt[36] == 0 && pkt[37] == 21)	//FTP Port monitor
	               	return;
}