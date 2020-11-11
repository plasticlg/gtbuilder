/**
 * @file		builder.hxx
 * @author	Lars Görner <lars.goerner@plasticlogic.com>
 * @brief 	Test Hello World string builder.
 * @version	0.1a
 * @date		2020
 * @copyright	(C) 2020 Plastic Logic
 */
 
#include <builder.h>
 
namespace gt::gtbuilder {
	std::string Builder::helloString(void) {
		return std::string(this->s_helloString);
	}
}