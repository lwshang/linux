// SPDX-License-Identifier: GPL-2.0
/*
 * demo.h - print log which will be used in a Rust module via bindings
 */

#ifndef _DEMO_H_
#define _DEMO_H_

#include <linux/printk.h>

static inline void demo_print(void)
{
	pr_info("Hello from demo!\n");
}

#endif /* _DEMO_H_ */
