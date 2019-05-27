#include "AnaForm.h"
using namespace ResimKarsilastirma_WinForm;             //            The name of the namespace in MyForm.h
[STAThreadAttribute]								   //            Run this program in STA mode
int main(){
	AnaForm fm;											   //            The form to be created and shown
	fm.ShowDialog();									   //            Show the form
	return 0;
}

