#define NOMINMAX
#pragma once
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/xfeatures2d/nonfree.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <vector>
#include <windows.h>
#include <opencv\cv.h>
//#include <string>
//using std::string;


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace cv;

//using namespace std;
namespace ResimKarsilastirma_WinForm {	
	/// <summary>
	/// Summary for AnaForm
	/// </summary>
	public ref class AnaForm : public System::Windows::Forms::Form
	{
	public:
		AnaForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AnaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Microsoft::VisualBasic::Compatibility::VB6::DriveListBox^  driveListBox1;
	protected:
	private: Microsoft::VisualBasic::Compatibility::VB6::DirListBox^  dirListBox1;





	private: System::Windows::Forms::Button^  btnKarþýlaþtýr;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  PctBox_Kaynak;

	private: System::Windows::Forms::ListView^  lvDosyalar;
	private: System::Windows::Forms::ColumnHeader^  chDosya;
	private: System::Windows::Forms::ColumnHeader^  chBenzerlik;
	private: System::Windows::Forms::ComboBox^  cmbFiltre;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnKaynakResimSec;
	private: System::Windows::Forms::TextBox^  txtKaynakResimYolu;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::CheckBox^  chkYuzTara;
	private: System::Windows::Forms::PictureBox^  PctBox_Hedef;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pctOk1;
	private: System::Windows::Forms::PictureBox^  pct;
	private: System::Windows::Forms::Label^  lbl_Error;
	private: System::Windows::Forms::Label^  lbl_min;
	private: System::Windows::Forms::Label^  lbl_max;
	private: System::Windows::Forms::ImageList^  ýmageList1;
	private: System::Windows::Forms::Label^  label5;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AnaForm::typeid));
			this->driveListBox1 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::DriveListBox());
			this->dirListBox1 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::DirListBox());
			this->btnKarþýlaþtýr = (gcnew System::Windows::Forms::Button());
			this->ýmageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PctBox_Kaynak = (gcnew System::Windows::Forms::PictureBox());
			this->lvDosyalar = (gcnew System::Windows::Forms::ListView());
			this->chDosya = (gcnew System::Windows::Forms::ColumnHeader());
			this->chBenzerlik = (gcnew System::Windows::Forms::ColumnHeader());
			this->cmbFiltre = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnKaynakResimSec = (gcnew System::Windows::Forms::Button());
			this->txtKaynakResimYolu = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->chkYuzTara = (gcnew System::Windows::Forms::CheckBox());
			this->PctBox_Hedef = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pctOk1 = (gcnew System::Windows::Forms::PictureBox());
			this->pct = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_Error = (gcnew System::Windows::Forms::Label());
			this->lbl_min = (gcnew System::Windows::Forms::Label());
			this->lbl_max = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PctBox_Kaynak))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PctBox_Hedef))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctOk1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct))->BeginInit();
			this->SuspendLayout();
			// 
			// driveListBox1
			// 
			this->driveListBox1->FormattingEnabled = true;
			this->driveListBox1->Location = System::Drawing::Point(12, 12);
			this->driveListBox1->Name = L"driveListBox1";
			this->driveListBox1->Size = System::Drawing::Size(222, 23);
			this->driveListBox1->TabIndex = 0;
			// 
			// dirListBox1
			// 
			this->dirListBox1->FormattingEnabled = true;
			this->dirListBox1->IntegralHeight = false;
			this->dirListBox1->Location = System::Drawing::Point(12, 41);
			this->dirListBox1->Name = L"dirListBox1";
			this->dirListBox1->Size = System::Drawing::Size(222, 494);
			this->dirListBox1->TabIndex = 1;
			// 
			// btnKarþýlaþtýr
			// 
			this->btnKarþýlaþtýr->FlatAppearance->BorderSize = 2;
			this->btnKarþýlaþtýr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnKarþýlaþtýr->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnKarþýlaþtýr->ImageKey = L"SearchFile.png";
			this->btnKarþýlaþtýr->ImageList = this->ýmageList1;
			this->btnKarþýlaþtýr->Location = System::Drawing::Point(1231, 9);
			this->btnKarþýlaþtýr->Margin = System::Windows::Forms::Padding(4);
			this->btnKarþýlaþtýr->Name = L"btnKarþýlaþtýr";
			this->btnKarþýlaþtýr->Size = System::Drawing::Size(179, 94);
			this->btnKarþýlaþtýr->TabIndex = 30;
			this->btnKarþýlaþtýr->Text = L"Karþýlaþtýr";
			this->btnKarþýlaþtýr->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnKarþýlaþtýr->UseVisualStyleBackColor = true;
			this->btnKarþýlaþtýr->Click += gcnew System::EventHandler(this, &AnaForm::btnKarþýlaþtýr_Click);
			// 
			// ýmageList1
			// 
			this->ýmageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ýmageList1.ImageStream")));
			this->ýmageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->ýmageList1->Images->SetKeyName(0, L"My_Pictures.png");
			this->ýmageList1->Images->SetKeyName(1, L"SearchFile.png");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(885, 86);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 17);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Resim Karþýlaþtýrma Ýþlemi";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->pictureBox1->Location = System::Drawing::Point(888, 111);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(522, 423);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// PctBox_Kaynak
			// 
			this->PctBox_Kaynak->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->PctBox_Kaynak->Location = System::Drawing::Point(558, 111);
			this->PctBox_Kaynak->Margin = System::Windows::Forms::Padding(4);
			this->PctBox_Kaynak->Name = L"PctBox_Kaynak";
			this->PctBox_Kaynak->Size = System::Drawing::Size(212, 206);
			this->PctBox_Kaynak->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PctBox_Kaynak->TabIndex = 22;
			this->PctBox_Kaynak->TabStop = false;
			// 
			// lvDosyalar
			// 
			this->lvDosyalar->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->chDosya, this->chBenzerlik });
			this->lvDosyalar->Location = System::Drawing::Point(240, 43);
			this->lvDosyalar->Name = L"lvDosyalar";
			this->lvDosyalar->Size = System::Drawing::Size(309, 492);
			this->lvDosyalar->TabIndex = 35;
			this->lvDosyalar->UseCompatibleStateImageBehavior = false;
			this->lvDosyalar->View = System::Windows::Forms::View::Details;
			// 
			// chDosya
			// 
			this->chDosya->Text = L"Dosya Adý";
			this->chDosya->Width = 95;
			// 
			// chBenzerlik
			// 
			this->chBenzerlik->Text = L"Benzer Noktalar";
			this->chBenzerlik->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->chBenzerlik->Width = 120;
			// 
			// cmbFiltre
			// 
			this->cmbFiltre->FormattingEnabled = true;
			this->cmbFiltre->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"*.jpg", L"*.png", L"*.gif" });
			this->cmbFiltre->Location = System::Drawing::Point(393, 12);
			this->cmbFiltre->Name = L"cmbFiltre";
			this->cmbFiltre->Size = System::Drawing::Size(156, 24);
			this->cmbFiltre->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(240, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 17);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Dosya Uzantýsý :";
			// 
			// btnKaynakResimSec
			// 
			this->btnKaynakResimSec->FlatAppearance->BorderSize = 2;
			this->btnKaynakResimSec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnKaynakResimSec->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnKaynakResimSec->ImageIndex = 0;
			this->btnKaynakResimSec->ImageList = this->ýmageList1;
			this->btnKaynakResimSec->Location = System::Drawing::Point(558, 9);
			this->btnKaynakResimSec->Margin = System::Windows::Forms::Padding(4);
			this->btnKaynakResimSec->Name = L"btnKaynakResimSec";
			this->btnKaynakResimSec->Size = System::Drawing::Size(209, 94);
			this->btnKaynakResimSec->TabIndex = 39;
			this->btnKaynakResimSec->Text = L"Kaynak Resim";
			this->btnKaynakResimSec->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnKaynakResimSec->UseVisualStyleBackColor = true;
			this->btnKaynakResimSec->Click += gcnew System::EventHandler(this, &AnaForm::btnKaynakResimSec_Click);
			// 
			// txtKaynakResimYolu
			// 
			this->txtKaynakResimYolu->Location = System::Drawing::Point(778, 41);
			this->txtKaynakResimYolu->Name = L"txtKaynakResimYolu";
			this->txtKaynakResimYolu->Size = System::Drawing::Size(268, 22);
			this->txtKaynakResimYolu->TabIndex = 40;
			// 
			// chkYuzTara
			// 
			this->chkYuzTara->AutoSize = true;
			this->chkYuzTara->Location = System::Drawing::Point(1102, 41);
			this->chkYuzTara->Name = L"chkYuzTara";
			this->chkYuzTara->Size = System::Drawing::Size(107, 21);
			this->chkYuzTara->TabIndex = 41;
			this->chkYuzTara->Text = L"Yuzleri Tara";
			this->chkYuzTara->UseVisualStyleBackColor = true;
			this->chkYuzTara->CheckedChanged += gcnew System::EventHandler(this, &AnaForm::chkYuzTara_CheckedChanged);
			// 
			// PctBox_Hedef
			// 
			this->PctBox_Hedef->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->PctBox_Hedef->Location = System::Drawing::Point(558, 329);
			this->PctBox_Hedef->Margin = System::Windows::Forms::Padding(4);
			this->PctBox_Hedef->Name = L"PctBox_Hedef";
			this->PctBox_Hedef->Size = System::Drawing::Size(209, 206);
			this->PctBox_Hedef->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PctBox_Hedef->TabIndex = 42;
			this->PctBox_Hedef->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(775, 86);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 17);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Kaynak Resim";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(775, 326);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 17);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Hedef Resim";
			// 
			// pctOk1
			// 
			this->pctOk1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctOk1.Image")));
			this->pctOk1->Location = System::Drawing::Point(777, 111);
			this->pctOk1->Name = L"pctOk1";
			this->pctOk1->Size = System::Drawing::Size(95, 107);
			this->pctOk1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pctOk1->TabIndex = 45;
			this->pctOk1->TabStop = false;
			// 
			// pct
			// 
			this->pct->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pct.Image")));
			this->pct->Location = System::Drawing::Point(778, 356);
			this->pct->Name = L"pct";
			this->pct->Size = System::Drawing::Size(95, 107);
			this->pct->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pct->TabIndex = 46;
			this->pct->TabStop = false;
			// 
			// lbl_Error
			// 
			this->lbl_Error->AutoSize = true;
			this->lbl_Error->Location = System::Drawing::Point(840, 517);
			this->lbl_Error->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_Error->Name = L"lbl_Error";
			this->lbl_Error->Size = System::Drawing::Size(20, 17);
			this->lbl_Error->TabIndex = 33;
			this->lbl_Error->Text = L"...";
			this->lbl_Error->Visible = false;
			// 
			// lbl_min
			// 
			this->lbl_min->AutoSize = true;
			this->lbl_min->Location = System::Drawing::Point(802, 517);
			this->lbl_min->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_min->Name = L"lbl_min";
			this->lbl_min->Size = System::Drawing::Size(30, 17);
			this->lbl_min->TabIndex = 32;
			this->lbl_min->Text = L"min";
			this->lbl_min->Visible = false;
			// 
			// lbl_max
			// 
			this->lbl_max->AutoSize = true;
			this->lbl_max->Location = System::Drawing::Point(761, 517);
			this->lbl_max->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_max->Name = L"lbl_max";
			this->lbl_max->Size = System::Drawing::Size(33, 17);
			this->lbl_max->TabIndex = 31;
			this->lbl_max->Text = L"max";
			this->lbl_max->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(774, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 17);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Kaynak Resim Yolu:";
			// 
			// AnaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1423, 547);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pct);
			this->Controls->Add(this->pctOk1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PctBox_Hedef);
			this->Controls->Add(this->chkYuzTara);
			this->Controls->Add(this->txtKaynakResimYolu);
			this->Controls->Add(this->btnKaynakResimSec);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbFiltre);
			this->Controls->Add(this->lvDosyalar);
			this->Controls->Add(this->lbl_Error);
			this->Controls->Add(this->lbl_min);
			this->Controls->Add(this->lbl_max);
			this->Controls->Add(this->btnKarþýlaþtýr);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->PctBox_Kaynak);
			this->Controls->Add(this->dirListBox1);
			this->Controls->Add(this->driveListBox1);
			this->Name = L"AnaForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AnaForm";
			this->Load += gcnew System::EventHandler(this, &AnaForm::AnaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PctBox_Kaynak))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PctBox_Hedef))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctOk1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
	private: System::Void DrawCvImage(IplImage *CvImage, System::Windows::Forms::PictureBox^ pbx) {
				 // typecast IplImage to Bitmap
				 if ((pbx->Image == nullptr) || (pbx->Width != CvImage->width) || (pbx->Height != CvImage->height)){
					 pbx->Width = CvImage->width;
					 pbx->Height = CvImage->height;
					 Bitmap^ bmpPicBox = gcnew Bitmap(pbx->Width, pbx->Height);
					 pbx->Image = bmpPicBox;
				 }

				 Graphics^g = Graphics::FromImage(pbx->Image);

				 Bitmap^ bmp = gcnew Bitmap(CvImage->width, CvImage->height, CvImage->widthStep,
					 System::Drawing::Imaging::PixelFormat::Format24bppRgb, IntPtr(CvImage->imageData));

				 g->DrawImage(bmp, 0, 0, CvImage->width, CvImage->height);
				 pbx->Refresh();

				 delete g;
	}
	void MarshalString(System::String ^ s, string& os) {
		 using namespace Runtime::InteropServices;
		 const char* chars =
			 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		 os = chars;
		 Marshal::FreeHGlobal(IntPtr((void*)chars));
	 }
	
	private: System::Void btnKarþýlaþtýr_Click(System::Object^  sender, System::EventArgs^  e) {
				 cv::String face_cascade_name = "D:/projelerim/opencv/programlar/opencv/sources/data/haarcascades/haarcascade_frontalface_alt.xml";
				 cv::CascadeClassifier face_cascade;
				 if (!face_cascade.load(face_cascade_name)){ MessageBox::Show("Yüz kütüphanesi yüklenemedi"); }

				 std::string stdText1;				 
				 System::String^ systemText1;
				 systemText1 = txtKaynakResimYolu->Text;
				 MarshalString(systemText1, stdText1);
				 
				 //Seçilen kaynak resmi gri renkli olarak Mat türünden oluþtur
				 Mat img_object_ilk = imread(stdText1, CV_LOAD_IMAGE_GRAYSCALE);
				 Mat img_object;				
				 
				 //Hedef resim klasöründeki dosyalarý diziye aktar
				 lvDosyalar->Items->Clear();
				 array<System::String^>^ dosyalar = Directory::GetFiles(dirListBox1->Path, cmbFiltre->Text);			

				 int buyuk_deger = 1;
				 System::String^ buyuk_deger_resim_yolu;
				 System::String^ onceki_deger_resim_yolu;
				 //int i = 0;
				 //Dosyalar dizisi içerisindeki resim dosyalarýný tek tek okumak için döngü oluþturuyoruz.
				 for each(System::String^ dosya in dosyalar)
				 {					
					 systemText1 = dosya;
					 //system stringi std stringe dönüþtürüyoruz. Çünkü bazý string türlerde hata vermektedir
					 MarshalString(systemText1, stdText1);

					 //Dosyalar dizisi içerisindeki hedef resmi sýrasýyla gri renge çevirerek okuyorak Mat türünden tanýmlýyoruz. 
					 Mat img_scene = imread(stdText1, CV_LOAD_IMAGE_GRAYSCALE);

					 //if (!img_object.data || !img_scene.data)
					 //{
						 //MessageBox::Show("Kaynak ya da hedef resim okunamadý");
					 //}
					 //Sýrasýyla okunan hedef resmi kaynak resme göre boyutlandýrýyoruz.
					 resize(img_object_ilk, img_object, cv::Size(img_scene.cols, img_scene.rows), 0, 0, INTER_LINEAR);

					 std::vector< DMatch > good_matches;
					 Mat img_matches;
					 if (yuzleri_tara == true)
					 {
						 std::vector<Rect> hedef_faces;
						 //Görüntünün belli bir gri seviyesinde yoðunlaþmýþ histogramýný tüm gri seviyesi aralýðýna yayýyoruz.
						 equalizeHist(img_scene, img_scene);
						 //Yüzü görüntüde bul
						 face_cascade.detectMultiScale(img_scene, hedef_faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(30, 30));						
						 Mat faceROI_hedef;
						 //Bulunan yüz adedi kadar döngü kur
						 for (int i = 0; i < hedef_faces.size(); i++)
						 {
							 cv::Point center(hedef_faces[i].x + hedef_faces[i].width*0.5, hedef_faces[i].y + hedef_faces[i].height*0.5);
							 //Bulunan yüzü yuvarlak içerisine alýyoruz
							 ellipse(img_scene, center, cv::Size(hedef_faces[i].width*0.5, hedef_faces[i].height*0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
							 //Resmin genelinden bulunup yuvarlak içerisine alýnan yüz bölgesini seçiyoruz.
							 faceROI_hedef = img_scene(hedef_faces[i]);
							 //Rect rect = hedef_faces[i];
							 //rectangle(img_scene, rect, CV_RGB(0, 255, 0), 2);

							 //IplImage* yedek = cvCloneImage(&(IplImage)img_scene);
							 //IplImage *yuz_resmi = cvCreateImage(cvGetSize(yedek), yedek->depth, yedek->nChannels);
						 }

						 std::vector<Rect> kaynak_faces;	
						 //Görüntünün belli bir gri seviyesinde yoðunlaþmýþ histogramýný tüm gri seviyesi aralýðýna yayýyoruz.
						 equalizeHist(img_object, img_object);
						 face_cascade.detectMultiScale(img_object, kaynak_faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(30, 30));
						 Mat faceROI_kaynak;
						 for (int i = 0; i < kaynak_faces.size(); i++)
						 {
							 cv::Point center(kaynak_faces[i].x + kaynak_faces[i].width*0.5, kaynak_faces[i].y + kaynak_faces[i].height*0.5);
							 ellipse(img_object, center, cv::Size(kaynak_faces[i].width*0.5, kaynak_faces[i].height*0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
							 faceROI_kaynak = img_object(kaynak_faces[i]);							 
						 }

						 //1. Adým - SURF Detector kullanarak keypoint'leri algýla
						 int minHessian = 400;

						 SurfFeatureDetector detector(minHessian);

						 std::vector<KeyPoint> keypoints_object, keypoints_scene;

						 detector.detect(faceROI_kaynak, keypoints_object);
						 detector.detect(faceROI_hedef, keypoints_scene);

						 //2. Adým - Tanýmlamalarý hesapla (vector özellikleri)
						 SurfDescriptorExtractor extractor;

						 Mat descriptors_object, descriptors_scene;

						 extractor.compute(faceROI_kaynak, keypoints_object, descriptors_object);
						 extractor.compute(faceROI_hedef, keypoints_scene, descriptors_scene);

						 //3. Adým -  FLANN matcher kullanarak vektör tanýmlamalarýný karþýlaþtýr.
						 FlannBasedMatcher matcher;
						 std::vector< DMatch > matches;
						 matcher.match(descriptors_object, descriptors_scene, matches);

						 double max_dist = 0; double min_dist = 100;

						 // Keypoint'lerin aralarýndaki max ve min mesafelerini hesapla
						 for (int i = 0; i < descriptors_object.rows; i++)
						 {
							 double dist = matches[i].distance;
							 if (dist < min_dist) min_dist = dist;
							 if (dist > max_dist) max_dist = dist;
						 }

						 printf("-- Max dist : %f \n", max_dist);
						 printf("-- Min dist : %f \n", min_dist);


						 // Yalnýzca iyi karþýlaþtýrma sonuçlarý üzerinde çizim yap (örneðin mesafe deðeri 3*min_dist deðerinden küçükse)

						 if ((max_dist == 0) && (min_dist == 0))
						 {
							 min_dist = 0.1;
							 max_dist = 0.9;
						 }
						 
						 for (int i = 0; i < descriptors_object.rows; i++)
						 {
							 if (matches[i].distance < 3 * min_dist)
							 {
								 good_matches.push_back(matches[i]);
							 }
						 }
						 						 
						 drawMatches(faceROI_kaynak, keypoints_object, faceROI_hedef, keypoints_scene,
							 good_matches, img_matches, Scalar::all(-1), Scalar::all(-1),
							 vector<char>(), DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS);
						 						 
						 std::vector<Point2f> obj;
						 std::vector<Point2f> scene;
						 int i = 0;
						 for (i; i < good_matches.size(); i++)
						 {
							 // Ýyi karþýlaþtýrma sonuçlarýna ait keypoint'leri al
							 obj.push_back(keypoints_object[good_matches[i].queryIdx].pt);
							 scene.push_back(keypoints_scene[good_matches[i].trainIdx].pt);
						 }

						 Mat H = findHomography(obj, scene, CV_RANSAC);

						 // Kaynak resme ait köþe deðerlerini al. (Nesne algýlandýðýnda) 					 
						 std::vector<Point2f> obj_corners(4);
						 obj_corners[0] = cvPoint(0, 0); obj_corners[1] = cvPoint(faceROI_kaynak.cols, 0);
						 obj_corners[2] = cvPoint(faceROI_kaynak.cols, faceROI_kaynak.rows); obj_corners[3] = cvPoint(0, faceROI_kaynak.rows);
						 std::vector<Point2f> scene_corners(4);

						 perspectiveTransform(obj_corners, scene_corners, H);

						 // Köþeler arasýnda çizgiler çek. (Hedef resimdeki nesne konumlandýrýldýðýnda)					 
						 line(img_matches, scene_corners[0] + Point2f(faceROI_kaynak.cols, 0), scene_corners[1] + Point2f(faceROI_kaynak.cols, 0), Scalar(0, 255, 0), 4);
						 line(img_matches, scene_corners[1] + Point2f(faceROI_kaynak.cols, 0), scene_corners[2] + Point2f(faceROI_kaynak.cols, 0), Scalar(0, 255, 0), 4);
						 line(img_matches, scene_corners[2] + Point2f(faceROI_kaynak.cols, 0), scene_corners[3] + Point2f(faceROI_kaynak.cols, 0), Scalar(0, 255, 0), 4);
						 line(img_matches, scene_corners[3] + Point2f(faceROI_kaynak.cols, 0), scene_corners[0] + Point2f(faceROI_kaynak.cols, 0), Scalar(0, 255, 0), 4);
						 
					 }
					 else
					 {
						 //1. Adým - SURF Detector kullanarak keypoint'leri algýla
						 int minHessian = 400;

						 SurfFeatureDetector detector(minHessian);

						 std::vector<KeyPoint> keypoints_object, keypoints_scene;

						 detector.detect(img_object, keypoints_object);
						 detector.detect(img_scene, keypoints_scene);

						 //2. Adým - Tanýmlamalarý hesapla (vector özellikleri)
						 SurfDescriptorExtractor extractor;

						 Mat descriptors_object, descriptors_scene;

						 extractor.compute(img_object, keypoints_object, descriptors_object);
						 extractor.compute(img_scene, keypoints_scene, descriptors_scene);

						 //3. Adým -  FLANN matcher kullanarak vektör tanýmlamalarýný karþýlaþtýr.
						 FlannBasedMatcher matcher;
						 std::vector< DMatch > matches;
						 matcher.match(descriptors_object, descriptors_scene, matches);

						 double max_dist = 0; double min_dist = 100;

						 // Keypoint'lerin aralarýndaki max ve min mesafelerini hesapla
						 for (int i = 0; i < descriptors_object.rows; i++)
						 {
							 double dist = matches[i].distance;
							 if (dist < min_dist) min_dist = dist;
							 if (dist > max_dist) max_dist = dist;
						 }

						 printf("-- Max dist : %f \n", max_dist);
						 printf("-- Min dist : %f \n", min_dist);

						 // Yalnýzca iyi karþýlaþtýrma sonuçlarý üzerinde çizim yap (örneðin mesafe deðeri 3*min_dist deðerinden küçükse)

						 if ((max_dist == 0) && (min_dist == 0))
						 {
							 min_dist = 0.1;
							 max_dist = 0.9;
						 }

						 //std::vector< DMatch > good_matches;

						 for (int i = 0; i < descriptors_object.rows; i++)
						 {
							 if (matches[i].distance < 3 * min_dist)
							 {
								 good_matches.push_back(matches[i]);
							 }
						 }

						 //Mat img_matches;
						 //Eþleþen noktalarý iþaretleme
						 drawMatches(img_object, keypoints_object, img_scene, keypoints_scene,
							 good_matches, img_matches, Scalar::all(-1), Scalar::all(-1),
							 vector<char>(), DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS);

						 //Nesneyi yerelleþtir.
						 std::vector<Point2f> obj;
						 std::vector<Point2f> scene;
						 int i = 0;
						 for (i; i < good_matches.size(); i++)
						 {
							 // Ýyi karþýlaþtýrma sonuçlarýna ait keypoint'leri al
							 obj.push_back(keypoints_object[good_matches[i].queryIdx].pt);
							 scene.push_back(keypoints_scene[good_matches[i].trainIdx].pt);
						 }

						 Mat H = findHomography(obj, scene, CV_RANSAC);

						 // Kaynak resme ait köþe deðerlerini al. (Nesne algýlandýðýnda) 					 
						 std::vector<Point2f> obj_corners(4);
						 obj_corners[0] = cvPoint(0, 0); obj_corners[1] = cvPoint(img_object.cols, 0);
						 obj_corners[2] = cvPoint(img_object.cols, img_object.rows); obj_corners[3] = cvPoint(0, img_object.rows);
						 std::vector<Point2f> scene_corners(4);

						 //Kaynak resme ait homography matrisiyle, hedef resimlere ait homography matrisinden bir dönüþüm matrisi oluþturulur.
						 perspectiveTransform(obj_corners, scene_corners, H);

						 // Köþeler arasýnda çizgiler çekerek çerçeve içerisine al. (Hedef resimdeki nesne konumlandýrýldýðýnda)					 						 
						 //line(img_matches, scene_corners[0] + Point2f(img_object.cols, 0), scene_corners[1] + Point2f(img_object.cols, 0), Scalar(0, 255, 0), 4);
						 //line(img_matches, scene_corners[1] + Point2f(img_object.cols, 0), scene_corners[2] + Point2f(img_object.cols, 0), Scalar(0, 255, 0), 4);
						 //line(img_matches, scene_corners[2] + Point2f(img_object.cols, 0), scene_corners[3] + Point2f(img_object.cols, 0), Scalar(0, 255, 0), 4);
						 //line(img_matches, scene_corners[3] + Point2f(img_object.cols, 0), scene_corners[0] + Point2f(img_object.cols, 0), Scalar(0, 255, 0), 4);
					 }
					 
					 ListViewItem ^ lviDosya = gcnew ListViewItem(Path::GetFileName(dosya));
					 //good_matches.size() yerine i de kullanýlabilir.
					 ListViewItem::ListViewSubItem ^ lviSubItemDosya = gcnew ListViewItem::ListViewSubItem(lviDosya, good_matches.size().ToString());
					 lviDosya->SubItems->Add(lviSubItemDosya);
					 lvDosyalar->Items->Add(lviDosya);
					 
					 this->lvDosyalar->Sorting = SortOrder::Ascending;
					 this->lvDosyalar->View = View::Details;
					 lvDosyalar->Sort();

									 		 
					 if (good_matches.size() > buyuk_deger)
					 {
						 buyuk_deger = good_matches.size();
						 buyuk_deger_resim_yolu = Path::GetFileName(dosya);

						 std::string stdText1;
						 System::String^ dosya_yolu;
						 systemText1 = "D:" + "/" + Path::GetFileName(dosya);
						 MarshalString(systemText1, stdText1);

						 //DeleteFile(stdText1);

						 vector<int> compression_params; //resme ait sýkýþtýrma parametrelerini saklar.
						 compression_params.push_back(CV_IMWRITE_JPEG_QUALITY); //Sýkýþtýrma tekniðini belirler.
						 compression_params.push_back(98); //Sýkýþtýrma kalitesini belirler.				 
						 bool bSuccess = imwrite(stdText1, img_matches, compression_params); //Resmi dosyaya yazar.

						 if (!bSuccess)
						 {

							 lbl_Error->Text = "Dosya Kaydedilemedi";
							 //system("pause"); //wait for a key press

						 }										
					 }	

					 pictureBox1->Load("D:/" + buyuk_deger_resim_yolu);
					 PctBox_Hedef->Load(dirListBox1->Path+"/"+buyuk_deger_resim_yolu);
					 printf("Büyük Deðer=", buyuk_deger);						 
				 }				 
	}			
	private: System::Void AnaForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 cmbFiltre->SelectedIndex = 0;
	}
	private: System::Void btnKaynakResimSec_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->Filter = "jpeg dosyalarý(*.jpg) | *.jpg|png dosyalarý(*.png) | *.png|gif dosyalarý(*.gif) | *.gif|Tüm dosyalar(*.*) | *.*";
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 PctBox_Kaynak->Load(openFileDialog1->FileName);
				 txtKaynakResimYolu->Text = openFileDialog1->FileName;
			 }
			
	}
			 bool yuzleri_tara = false;
private: System::Void chkYuzTara_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (chkYuzTara->Checked == true)
				 yuzleri_tara = true;
			 else
				 yuzleri_tara = false;
}
};
ref class ListViewItemComparer : public IComparer
{
private:
	int col;

public:
	ListViewItemComparer()
	{
		col = 1;
	}

	ListViewItemComparer(int column)
	{
		col = column;
	}

	virtual int Compare(Object^ x, Object^ y)
	{
		return System::String::Compare((dynamic_cast<ListViewItem^>(x))->SubItems[col]->Text,
			(dynamic_cast<ListViewItem^>(y))->SubItems[col]->Text);
	}
};
}
