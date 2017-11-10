// MainDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "login.pb.h"
#include<iostream>
#include <string>
#include <sstream>
int _tmain(int argc, _TCHAR* argv[])
{
/////////////////////////////////////////////////////////////////////
	PBLoginField pblogin;
	pblogin.set_userid(1);
	std::ostringstream ostr;
	ostr << "xiaoming" << 1;
	pblogin.set_szusername(ostr.str());
	pblogin.set_szpassword("11111");
	pblogin.set_remember(true);
	pblogin.set_startup(false);
	
	std::string strOut;
	pblogin.SerializePartialToString(&strOut);
//////////////////////////////////////////////////////////////////////
	PBLoginField pblogin2;
	pblogin2.ParseFromArray(strOut.data(), strOut.size());
	unsigned int uid   = pblogin2.userid();
	std::string szName = pblogin2.szusername();
//////////////////////////////////////////////////////////////////////
	PBLoginList pbLoginList;
	for (int idx2 = 1; idx2 < 50;idx2++)
	{
		PBLoginField* pbLogin3 = NULL;
		pbLogin3 = pbLoginList.add_loginlist();
		if (pbLogin3)
		{
			pbLogin3->set_userid(idx2);
			std::ostringstream ostr2;
			ostr2 << "xiaohong" << idx2;
			pbLogin3->set_szusername(ostr2.str());
			pbLogin3->set_szpassword("2222");
			pbLogin3->set_remember(true);
			pbLogin3->set_startup(false);
		}
	}
	std::string strOut2;
	pbLoginList.SerializePartialToString(&strOut2);
////////////////////////////////////////////////////////////////////////
	PBLoginList pbLoginList2;
	pbLoginList2.ParseFromArray(strOut2.data(), strOut2.size());

	int nCount  = pbLoginList2.loginlist_size();
	for (int idx3 = 0; idx3 < nCount;idx3++)
	{
		PBLoginField pbLogin4 = pbLoginList2.loginlist(idx3);
		unsigned int uid = pbLogin4.userid();
		std::string szName = pbLogin4.szusername();
	}
//////////////////////////////////////////////////////////////////////
	//获取字段
	const google::protobuf::FieldDescriptor* pFieldDescriptor = pblogin.GetDescriptor()->FindFieldByNumber(pblogin.kAutologinFieldNumber);
	if (NULL == pFieldDescriptor)
	{
		assert(0);
		return 0;
	}
	const std::string strFieldName = pFieldDescriptor->name();
//////////////////////////////////////////////////////////////////////
	return 0;
}

