// Copyright (C) 1991 - 1999 Rational Software Corporation

#include "StdAfx.h"
#include "ContainerListener.h"

#include "../BaseObject.h"
#include "../Container/Container.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//--------------------------------------------------------------------------------------
// ����:	��������һ������
// ����:	��
// ����ֵ:	��
// ������	����TRUE����������ɷ�ִ��,FALSE����ֹ�ɷ�
//--------------------------------------------------------------------------------------
//##ModelId=41A4308B01B5
BOOL CContainerListener::OnObjectAdded(CContainer* pContainer, CBaseObject* pObj, LPVOID pVoid)
{
	return TRUE;
}

//--------------------------------------------------------------------------------------
// ����:	����ɾ��һ������
// ����:	��
// ����ֵ:	��
// ������	����TRUE����������ɷ�ִ��,FALSE����ֹ�ɷ�
//--------------------------------------------------------------------------------------
//##ModelId=41A430B10232
BOOL CContainerListener::OnObjectRemoved(CContainer* pContainer, CBaseObject* pObj, LPVOID pVoid)
{
	return TRUE;
}

//--------------------------------------------------------------------------------------
// ����:	��������һ������
// ����:	��
// ����ֵ:	��
// ������	����TRUE����������ɷ�ִ��,FALSE����ֹ�ɷ�
//--------------------------------------------------------------------------------------
//##ModelId=41A43146003E
BOOL CContainerListener::OnTraversingContainer(CContainer* pContainer, CBaseObject* pObject)
{
	return TRUE;
}
