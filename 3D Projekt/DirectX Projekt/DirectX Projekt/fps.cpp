#include "fps.h"


FpsClass::FpsClass()
{

}

FpsClass::FpsClass(const FpsClass&)
{

}


FpsClass::~FpsClass()
{

}

//The Initialize funktionen s�tter alla counters till 0 coh startar tiden. 
void FpsClass::Initialize()
{
	mFps = 0;
	mCount = 0;
	mStartTime = timeGetTime();
	return;
}

//Frame funktionen m�ste bli kallad varje frame s� att den kan �ka frame count med 1.Om kommissionen finner att en sekund har g�tt s� kommer det att lagra frame count i m_fps variabeln. Den �terst�ller sedan r�kningen och startar timern igen.
void FpsClass::Frame()
{
	mCount++;

	if (timeGetTime() >= (mStartTime + 1000))
	{
		mFps = mCount;
		mCount = 0;

		mStartTime = timeGetTime();
	}

}
//GetFps returnerar frame per sekund hastighet f�r den sista sekund som just passerat .
int FpsClass::GetFps()
{
	return mFps;
}
