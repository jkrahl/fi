void incrementaHora(int &hh, int &mm, int &ss)
{
	ss += 1;
    if(ss >= 60){
        ss = 0;
        mm += 1;
    }
    if(mm >= 60){
        mm = 0;
        hh += 1;
    }
    if(hh >= 24){
        hh = 0;
    }
}