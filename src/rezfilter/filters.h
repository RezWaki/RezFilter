#include <Windows.h>
using namespace System; using namespace System::Windows::Forms;
using namespace System::Drawing;

float currentw, currenth, totalw, totalh;

IntPtr HighContrast(float tolerance, Bitmap^ bmp){
	currentw = 1; currenth = 1;
	Color pixel_clr, new_clr;
	totalw = bmp->Width;
	totalh = bmp->Height;
		while(currenth < totalw){
			currentw++;
			if(currenth >= totalh){ currenth-=2; break; }
			if(currentw >= totalw){ currentw-=2; currenth++; currentw = 0; if(currenth >= totalh){ currenth-=2; break; } }
			pixel_clr = bmp->GetPixel(currentw, currenth);
			if(pixel_clr.R != 0){
				new_clr = Color::FromArgb(255, 0, 0);
			}
			if(pixel_clr.G != 0){
				new_clr = Color::FromArgb(0, 255, 0);
			}
			if(pixel_clr.B != 0){
				new_clr = Color::FromArgb(0, 0, 255);
			}
			if(pixel_clr.R == pixel_clr.G == pixel_clr.B == 255){ //white
				new_clr = Color::FromArgb(0, 0, 0);
			}
			/*if(pixel_clr.R < 255-tolerance && pixel_clr.G < 255-tolerance && pixel_clr.B < 255-tolerance){
				new_clr = Color::FromArgb(pixel_clr.R+tolerance, pixel_clr.G+tolerance, pixel_clr.B+tolerance);
			}*/
			bmp->SetPixel(currentw, currenth, new_clr);
		}
	return bmp->GetHbitmap(); //return handle
}

IntPtr HighColorize(float tolerance, Bitmap^ bmp){
	currentw = 1; currenth = 1;
	Color pixel_clr, new_clr;
	totalw = bmp->Width;
	totalh = bmp->Height;
		while(currenth < totalw){
			currentw++;
			if(currenth >= totalh){ currenth-=2; break; }
			if(currentw >= totalw){ currentw-=2; currenth++; currentw = 0; if(currenth >= totalh){ currenth-=2; break; } }
			pixel_clr = bmp->GetPixel(currentw, currenth);
			if(pixel_clr.R > tolerance && pixel_clr.G > tolerance && pixel_clr.B > tolerance){
				new_clr = Color::FromArgb(pixel_clr.R-tolerance, pixel_clr.G-tolerance, pixel_clr.B-tolerance);
			}
			bmp->SetPixel(currentw, currenth, new_clr);
		}
	return bmp->GetHbitmap(); //return handle
}

IntPtr Redish(float tolerance, Bitmap^ bmp){
	currentw = 1; currenth = 1;
	Color pixel_clr, new_clr;
	totalw = bmp->Width;
	totalh = bmp->Height;
		while(currenth < totalw){
			currentw++;
			if(currenth >= totalh){ currenth-=2; break; }
			if(currentw >= totalw){ currentw-=2; currenth++; currentw = 0; if(currenth >= totalh){ currenth-=2; break; } }
			pixel_clr = bmp->GetPixel(currentw, currenth);
			if(pixel_clr.R > tolerance){
				new_clr = Color::FromArgb(pixel_clr.R-tolerance, 0, 0);
			}
			bmp->SetPixel(currentw, currenth, new_clr);
		}
	return bmp->GetHbitmap(); //return handle
}

IntPtr Greenish(float tolerance, Bitmap^ bmp){
	currentw = 1; currenth = 1;
	Color pixel_clr, new_clr;
	totalw = bmp->Width;
	totalh = bmp->Height;
		while(currenth < totalw){
			currentw++;
			if(currenth >= totalh){ currenth-=2; break; }
			if(currentw >= totalw){ currentw-=2; currenth++; currentw = 0; if(currenth >= totalh){ currenth-=2; break; } }
			pixel_clr = bmp->GetPixel(currentw, currenth);
			if(pixel_clr.G > tolerance){
				new_clr = Color::FromArgb(0, pixel_clr.G-tolerance, 0);
			}
			bmp->SetPixel(currentw, currenth, new_clr);
		}
	return bmp->GetHbitmap(); //return handle
}

IntPtr Bluish(float tolerance, Bitmap^ bmp){
	currentw = 1; currenth = 1;
	Color pixel_clr, new_clr;
	totalw = bmp->Width;
	totalh = bmp->Height;
		while(currenth < totalw){
			currentw++;
			if(currenth >= totalh){ currenth-=2; break; }
			if(currentw >= totalw){ currentw-=2; currenth++; currentw = 0; if(currenth >= totalh){ currenth-=2; break; } }
			pixel_clr = bmp->GetPixel(currentw, currenth);
			if(pixel_clr.B > tolerance){
				new_clr = Color::FromArgb(0, 0, pixel_clr.B-tolerance);
			}
			bmp->SetPixel(currentw, currenth, new_clr);
		}
	return bmp->GetHbitmap(); //return handle
}

IntPtr ColorBalance(float r, float g, float b,float tolerance, Bitmap^ bmp){
	currentw = 1; currenth = 1;
	Color pixel_clr, new_clr;
	totalw = bmp->Width;
	totalh = bmp->Height;
		while(currenth < totalw){
			currentw++;
			if(currenth >= totalh){ currenth-=2; break; }
			if(currentw >= totalw){ currentw-=2; currenth++; currentw = 0; if(currenth >= totalh){ currenth-=2; break; } }
			pixel_clr = bmp->GetPixel(currentw, currenth);
			if(pixel_clr.R+r <= 255 && pixel_clr.G+g <= 255 && pixel_clr.B+b <= 255){
				new_clr = Color::FromArgb(pixel_clr.R+r, pixel_clr.G+g, pixel_clr.B+b);
			}
			bmp->SetPixel(currentw, currenth, new_clr);
		}
	return bmp->GetHbitmap(); //return handle
}