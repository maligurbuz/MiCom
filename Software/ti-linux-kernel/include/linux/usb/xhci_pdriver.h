/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 */

#ifndef __USB_CORE_XHCI_PDRIVER_H
#define __USB_CORE_XHCI_PDRIVER_H

/**
 * struct usb_xhci_pdata - platform_data for generic xhci platform driver
 *
 * @usb3_lpm_capable:	determines if this xhci platform supports USB3
 *			LPM capability
 * @quirk_broken_stop_endpoint_fsls_dev: If true, XHCI will not use Stop
 *			Endpoint for FS/LS devices behind an HS hub.
 * @quirk_port_broken_pe: If true, XHCI will not use Port Disable.
 *
 */
struct usb_xhci_pdata {
	unsigned	usb3_lpm_capable:1;
	unsigned	quirk_broken_stop_endpoint_fsls_dev:1;
	unsigned	quirk_port_broken_pe:1;
};

#endif /* __USB_CORE_XHCI_PDRIVER_H */
