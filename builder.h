#pragma once
/**
 * @file		builder.h
 * @author	Lars Görner <lars.goerner@plasticlogic.com>
 * @brief 	Test Hello World string builder.
 * @version	0.1a
 * @date		2020
 * @copyright	(C) 2020 Plastic Logic
 */
 
#include <string>

namespace gt::gtbuilder {
	/**
	 * @brief Test Hello World string builder class.
	 */
	class Builder {
		private:
			const char* s_helloString = "Hello World!"; //!< static Hello World test string.
		public:
			/**
			 * @brief Getter for helloString.
			 *
			 * @return helloString.
			 */
			std::string helloString(void);
	};
}