/*
 * StringParserClass.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */

#include <string>
#include <string.h>
#include "../327_proj3_test/includes/StringParserClass.h"
#include "../327_proj3_test/includes/constants.h"

using namespace std;
using namespace KP_StringParserClass;

StringParserClass::StringParserClass() {
	pEndTag = NULL;
	pStartTag = NULL;
	areTagsSet = false;
}

StringParserClass::~StringParserClass() {
}

int StringParserClass::setTags(const char *pStart, const char *pEnd) {
	if (pStart == NULL || pEnd == NULL) {
		return ERROR_TAGS_NULL;
	}

	int siz = 0;
	while (pStart[siz] != '\0') {
		siz++;
		if (siz > 20)
			break;
	}

	char str[siz];
	pStartTag = str;

	int size = 0;
	while (pEnd[size] != '\0') {
		size++;
		if (size > 20)
			break;
	}

	char str2[size];
	pEndTag = str2;

	int i = 0;
	while (pStart[i] != '\0') {
		i++;
		pStartTag[i] = pStart[i];
		if (i > 20)
			break;
	}

	int j = 0;
	while (pEnd[j] != '\0') {
		j++;
		pEndTag[j] = pEnd[j];
		if (j > 20)
			break;
	}

	areTagsSet = true;

	return SUCCESS;
	//free any allocated memory before working
	//figure out how long each string is
	//make sure private members pStrartTag/pEndTag have the proper length
	//copy the string passed from function, into the private members of the class
	//set boolean condition indicated tags have been set
	//return with error status
}
int StringParserClass::getDataBetweenTags(char *pDataToSearchThru,
		std::vector<std::string> &myVector) {
	//make sure string vector is empty
	myVector.clear();

	if (pStartTag == NULL || pEndTag == NULL) {
		return ERROR_TAGS_NULL;
	}
	//confirm pointers to tags are not null, or return with error
	//confirm pointer to data is not null or return with error
	if (pDataToSearchThru == NULL) {
		return ERROR_DATA_NULL;
	}

	//we need five memory addresses
	//start of tagBegin
	int siz = 0;
	while (pStartTag[siz] != '\0') {
		siz++;
		if (siz > 20)
			break;
	}
	siz -= 1;
	char *pSEnd;
	pSEnd[siz] = pStartTag[siz];

	//end of tagBegin
	//start of content to extract
	//start of endTag
	//end of endTag

	//loop as many times as needed to extract all the contents
	//look for the start tag (findTag updates the pointer addresses
	//assign memory address for content
	//adjust the memory addresses for endTags to start looking after startTag
	//look for the end tag (findTag updates the pointer addressess)
	//if it found an end tag
	//figure out where its located
	//pull the proper length of the content and store it in a string
	//if no end tag
	//nothing to do but exit
	//adjust StartTag address to get ready for next loop
	//exit with error code
	return SUCCESS;
}

void StringParserClass::cleanup() {
	//if pStartTag is assigned, delete it and set it to zero
	//if pEndTag is assigned, delete it and set it to zero
}

int StringParserClass::findTag(char *pTagToLookFor, char *&pStart,
		char *&pEnd) {
	//make sure tags are not null, or return an error
	if (pEnd == NULL || pStart == NULL) {
		return ERROR_TAGS_NULL;
	}

	int siz = 0;
	while (pTagToLookFor[siz] != '\0') {
		siz++;
		if (siz > 20)
			break;
	}
	//get length of tag
	//get length of search string
	//loop throughthe string
	//if our current char matches first char of tag
	//compare the proper length of char from search string to that of our tag
	//if they are same, we found valid tag
	//adjust pStart/pEnd memory addresses and return
	//finished loop without success
	return SUCCESS;
}

