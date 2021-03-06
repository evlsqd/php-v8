/*
  +----------------------------------------------------------------------+
  | This file is part of the pinepain/php-v8 PHP extension.              |
  |                                                                      |
  | Copyright (c) 2015-2016 Bogdan Padalko <pinepain@gmail.com>          |
  |                                                                      |
  | Licensed under the MIT license: http://opensource.org/licenses/MIT   |
  |                                                                      |
  | For the full copyright and license information, please view the      |
  | LICENSE file that was distributed with this source or visit          |
  | http://opensource.org/licenses/MIT                                   |
  +----------------------------------------------------------------------+
*/

#ifndef PHP_V8_PROPERTY_ATTRIBUTE_H
#define PHP_V8_PROPERTY_ATTRIBUTE_H

#include <v8.h>

extern "C" {
#include "php.h"

#ifdef ZTS
#include "TSRM.h"
#endif
}

extern zend_class_entry* php_v8_property_attribute_class_entry;

PHP_MINIT_FUNCTION (php_v8_property_attribute);

#define PHP_V8_PROPERTY_ATTRIBUTE_FLAGS ( 0 \
    | v8::PropertyAttribute::None           \
    | v8::PropertyAttribute::ReadOnly       \
    | v8::PropertyAttribute::DontEnum       \
    | v8::PropertyAttribute::DontDelete     \
)


#endif //PHP_V8_PROPERTY_ATTRIBUTE_H
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */





