/*
 * TauNBT
 * NBTTag.h
 *
 * Copyright (c) Joshua Huelsman, 12/28/2012.
 * All rights reserved.
 * 
 * BSD License
 *
 * Redistribution and use in source and binary forms, with or without modification, are 
 * permitted provided that the following conditions are met:
 * - Redistributions of source code must retain the above copyright notice, this list of
 *  conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice, this list
 *  of conditions and the following disclaimer in the documentation and/or other materia
 * ls provided with the distribution.
 * - Neither the name of the "Joshua Huelsman" nor the names of its contributors may be u
 * sed to endorse or promote products derived from this software without specific prior 
 * written permission.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY E
 * XPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES O
 * F MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SH
 * ALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENT
 * AL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROC
 * UREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS I
 * NTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRI
 * CT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF T
 * HE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __TauNBT__NBTTag__
#define __TauNBT__NBTTag__

#include <string>
#include <vector>
#include <map>
#include <cmath>

class NBTTag
{
protected:
	int8_t type;
	int8_t _byte;
	int16_t _short;
	int32_t _int;
    int64_t _long;
	float_t _float;
	double_t _double;
    
	std::vector<char> _byte_array;
	std::string _string;
	std::vector<NBTTag> list;
	std::map<std::string, NBTTag> map;
	std::vector<int32_t> _int_array;;
	std::string name;
	bool is_named = true;
public:
	const static int8_t TAG_END = 0;
	const static int8_t TAG_BYTE = 1;
	const static int8_t TAG_SHORT = 2;
	const static int8_t TAG_INT = 3;
	const static int8_t TAG_LONG = 4;
	const static int8_t TAG_FLOAT = 5;
	const static int8_t TAG_DOUBLE = 6;
	const static int8_t TAG_BYTE_ARRAY = 7;
	const static int8_t TAG_STRING = 8;
	const static int8_t TAG_LIST = 9;
	const static int8_t TAG_COMPOUND = 10;
	const static int8_t TAG_INT_ARRAY = 11;
	int8_t& getType();
	int8_t& getByte();
	int16_t& getShort();
	int32_t& getInt();
	int64_t& getLong();
	float_t& getFloat();
	double_t& getDouble();
	std::vector<char>& getByteArray();
	std::string& getString();
	std::vector<NBTTag>& getList();
	std::map<std::string, NBTTag>& getMap();
	std::vector<int32_t>& getIntArray();;
	std::string& getName();
	bool& isNamed();
};


#endif /* defined(__TauNBT__NBTTag__) */
