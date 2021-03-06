// Point_on_curveStep.cpp: implementation of the CPoint_on_curveStep class.
//
//////////////////////////////////////////////////////////////////////

//#include "stdafx.h"
#include "scribble.h"
#include "Point_on_curveStep.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPoint_on_curveStep::CPoint_on_curveStep()
{
  nameClass("Point_on_curve");
}

CPoint_on_curveStep::~CPoint_on_curveStep()
{

}
HRESULT CPoint_on_curveStep::backPtr(CBaseStep *&prBrep)
{
  if (NULL!=m_pBack){
    m_pBack->backPtr( prBrep );  
    return S_OK;
  }
  return E_FAIL;
}
