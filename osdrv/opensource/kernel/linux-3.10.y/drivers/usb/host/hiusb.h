#ifndef __HI_USB_H__
#define __HI_USB_H__
extern int usb_disabled(void);
extern void hiusb_start_hcd(void);
extern void hiusb_stop_hcd(void);
extern void hiusb3_start_hcd(void __iomem *base);
extern void hiusb3_stop_hcd(void);
#endif
