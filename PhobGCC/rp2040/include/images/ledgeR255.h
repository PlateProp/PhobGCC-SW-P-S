// 'ledgeR255', 255x255px
const unsigned char ledgeR_indexes[] = { 0, 5, 7, 8, 9, 10, 11, 15 };
const unsigned char ledgeR_image[] = {
    0x00, 0xff, 0x00, 0xff, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x81, 0x04, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xe1, 0x03, 0x0c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xd1, 0x0b,
    0x14, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xc1, 0x13, 0x1c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xb1, 0x1b, 0x24, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xa1, 0x23, 0x2c, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x91, 0x2b, 0x34, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0x81, 0x33, 0x44, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x61, 0x43, 0x4c, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0x51, 0x4b, 0x54, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x41, 0x53,
    0x5c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x31, 0x5b, 0x64, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0x21, 0x63, 0x6c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x11, 0x6b, 0x74, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0x73, 0x7c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf1,
    0x7b, 0x8c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xd1, 0x8b, 0x94, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xc1, 0x93, 0x9c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xb1, 0x9b, 0xa4, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xa1, 0xa3, 0xac, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x91, 0xab, 0xb4, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x81, 0xb3, 0xbc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x71, 0xbb,
    0xcc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x51, 0xcb, 0xd4, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0x41, 0xd3, 0xdc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x31, 0xdb, 0xe4, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0x21, 0xe3, 0xec, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x11, 0xeb, 0xf4, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0xf3, 0xfc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf1, 0xfb, 0xfc, 0x04,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xe1, 0xfb, 0x03, 0xfc, 0x14, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xc1,
    0xfb, 0x13, 0xfc, 0x1c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xb1, 0xfb, 0x1b, 0xfc, 0x24, 0xf9, 0xf9,
    0xc9, 0x02, 0xf9, 0xf9, 0xc9, 0xfb, 0x23, 0xfc, 0x2c, 0xf9, 0xf9, 0x61, 0xc2, 0xf9, 0xf9, 0x61,
    0xfb, 0x2b, 0xfc, 0x34, 0xf9, 0xf9, 0x31, 0xfa, 0x12, 0xf9, 0xf9, 0x31, 0xfb, 0x33, 0xfc, 0x3c,
    0xf9, 0xf9, 0x09, 0xfa, 0x52, 0xf9, 0xf9, 0x09, 0xfb, 0x3b, 0xfc, 0x4c, 0xf9, 0xe1, 0xfa, 0x82,
    0xf9, 0xe1, 0xfb, 0x4b, 0xfc, 0x54, 0xf9, 0xc1, 0xfa, 0xb2, 0xf9, 0xc1, 0xfb, 0x53, 0xfc, 0x5c,
    0xf9, 0xa1, 0xfa, 0xe2, 0xf9, 0xa1, 0xfb, 0x5b, 0xfc, 0x64, 0xf9, 0x89, 0xfa, 0xfa, 0x02, 0xf9,
    0x89, 0xfb, 0x63, 0xfc, 0x6c, 0xf9, 0x71, 0xfa, 0xfa, 0x22, 0xf9, 0x71, 0xfb, 0x6b, 0xfc, 0x74,
    0xf9, 0x59, 0xfa, 0xfa, 0x42, 0xf9, 0x59, 0xfb, 0x73, 0xfc, 0x7c, 0xf9, 0x41, 0xfa, 0xfa, 0x62,
    0xf9, 0x41, 0xfb, 0x7b, 0xfc, 0x84, 0xf9, 0x29, 0xfa, 0xfa, 0x82, 0xf9, 0x29, 0xfb, 0x83, 0xfc,
    0x94, 0xf9, 0x09, 0xfa, 0xfa, 0xa2, 0xf9, 0x09, 0xfb, 0x93, 0xfc, 0x9c, 0xf9, 0xfa, 0xfa, 0xb2,
    0xf9, 0xfb, 0x9b, 0xfc, 0xa4, 0xe1, 0xfa, 0xfa, 0xd2, 0xe1, 0xfb, 0xa3, 0xfc, 0xac, 0xd1, 0xfa,
    0xfa, 0xe2, 0xd1, 0xfb, 0xab, 0xfc, 0xb4, 0xb9, 0xfa, 0xfa, 0xfa, 0x02, 0xb9, 0xfb, 0xb3, 0xfc,
    0xbc, 0xa9, 0xfa, 0xfa, 0xfa, 0x12, 0xa9, 0xfb, 0xbb, 0xfc, 0xc4, 0x99, 0xfa, 0xfa, 0xfa, 0x22,
    0x99, 0xfb, 0xc3, 0xfc, 0xd4, 0x81, 0xfa, 0xfa, 0xfa, 0x32, 0x81, 0xfb, 0xd3, 0xfc, 0xdc, 0x71,
    0xfa, 0xfa, 0xfa, 0x42, 0x71, 0xfb, 0xdb, 0xfc, 0xe4, 0x59, 0xfa, 0xfa, 0xfa, 0x62, 0x59, 0xfb,
    0xe3, 0xfc, 0xec, 0x49, 0xfa, 0xfa, 0xfa, 0x72, 0x49, 0xfb, 0xeb, 0xfc, 0xf4, 0x39, 0xfa, 0xfa,
    0xfa, 0x82, 0x39, 0xfb, 0xf3, 0xfc, 0xfc, 0x29, 0xfa, 0xfa, 0xfa, 0x92, 0x29, 0xfb, 0xfb, 0xfc,
    0xfc, 0x04, 0x19, 0xfa, 0xfa, 0xfa, 0xa2, 0x19, 0xfb, 0xfb, 0x03, 0xfc, 0xfc, 0x0c, 0x09, 0xfa,
    0xfa, 0xfa, 0xb2, 0x09, 0xfb, 0xfb, 0x0b, 0xfc, 0xfc, 0x1c, 0xfa, 0xfa, 0xfa, 0xb2, 0xfb, 0xfb,
    0x1b, 0xfc, 0xfc, 0x14, 0xfe, 0xfe, 0xfe, 0x3e, 0x85, 0xfb, 0xfb, 0x13, 0xfc, 0xfc, 0x0c, 0xfe,
    0xfe, 0xfe, 0x3e, 0x95, 0xfb, 0xfb, 0x0b, 0xfc, 0xfc, 0x04, 0xfe, 0xfe, 0xfe, 0x3e, 0xa5, 0xfb,
    0xfb, 0x03, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0x46, 0xad, 0xfb, 0xfb, 0xfc, 0xf4, 0xfe, 0xfe, 0xfe,
    0x46, 0xbd, 0xfb, 0xf3, 0xfc, 0xf4, 0xfe, 0xfe, 0xfe, 0x3e, 0xc5, 0xfb, 0xf3, 0xfc, 0xec, 0xfe,
    0xfe, 0xfe, 0x3e, 0xd5, 0xfb, 0xeb, 0xfc, 0xe4, 0xfe, 0xfe, 0xfe, 0x3e, 0xe5, 0xfb, 0xe3, 0xfc,
    0xe4, 0xfe, 0xfe, 0xfe, 0x36, 0xed, 0xfb, 0xe3, 0xfc, 0xdc, 0xfe, 0xfe, 0xfe, 0x3e, 0xf5, 0xfb,
    0xdb, 0xfc, 0xd4, 0xfe, 0xfe, 0xfe, 0x3e, 0xfd, 0x05, 0xfb, 0xd3, 0xfc, 0xd4, 0xfe, 0xfe, 0xfe,
    0x36, 0xfd, 0x0d, 0xfb, 0xd3, 0xfc, 0xcc, 0xfe, 0xfe, 0xfe, 0x36, 0xfd, 0x1d, 0xfb, 0xcb, 0xfc,
    0xcc, 0xfe, 0xfe, 0xfe, 0x2e, 0xfd, 0x25, 0xfb, 0xd3, 0xfc, 0xbc, 0xfe, 0xfe, 0xfe, 0x2e, 0xfd,
    0x35, 0xfb, 0xeb, 0xfc, 0x9c, 0xfe, 0xfe, 0xfe, 0x2e, 0xfd, 0x35, 0xfb, 0xfb, 0x03, 0xfc, 0x7c,
    0xfe, 0xfe, 0xfe, 0x2e, 0xfd, 0x45, 0xfb, 0xfb, 0x13, 0xfc, 0x64, 0xfe, 0xfe, 0xfe, 0x26, 0xfd,
    0x4d, 0xfb, 0xfb, 0x33, 0xfc, 0x3c, 0xfe, 0xfe, 0xfe, 0x26, 0xfd, 0x5d, 0xfb, 0xfb, 0x43, 0xfc,
    0x24, 0xfe, 0xfe, 0xfe, 0x1e, 0xfd, 0x65, 0xfb, 0xfb, 0x5b, 0xfc, 0x04, 0xfe, 0xfe, 0xfe, 0x1e,
    0xfd, 0x75, 0xfb, 0xfb, 0x6b, 0xec, 0xfe, 0xfe, 0xfe, 0x1e, 0xfd, 0x75, 0xfb, 0xfb, 0x8b, 0xc4,
    0xfe, 0xfe, 0xfe, 0x1e, 0xfd, 0x85, 0xfb, 0xfb, 0x9b, 0xac, 0xfe, 0xfe, 0xfe, 0x16, 0xfd, 0x8d,
    0xfb, 0xfb, 0xb3, 0x94, 0xfe, 0xfe, 0xfe, 0x0e, 0xfd, 0x95, 0xfb, 0xfb, 0xd3, 0x6c, 0xfe, 0xfe,
    0xfe, 0x0e, 0xfd, 0xa5, 0xfb, 0xfb, 0xe3, 0x54, 0xfe, 0xfe, 0xfe, 0x0e, 0xfd, 0xa5, 0xfb, 0xfb,
    0xfb, 0x3c, 0xfe, 0xfe, 0xfe, 0x0e, 0xfd, 0xa5, 0xfb, 0xfb, 0xfb, 0x1b, 0x14, 0xfe, 0xfe, 0xfe,
    0x16, 0xfd, 0xad, 0xfb, 0xfb, 0xfb, 0x2b, 0xfe, 0xfe, 0xfe, 0x16, 0xfd, 0xad, 0xfb, 0xfb, 0xfb,
    0x2b, 0xfd, 0xad, 0xfa, 0x62, 0xfd, 0xad, 0xfb, 0xfb, 0xfb, 0x23, 0xfd, 0xb5, 0xfa, 0x62, 0xfd,
    0xb5, 0xfb, 0xfb, 0xfb, 0x1b, 0xfd, 0xb5, 0xfa, 0x62, 0xfd, 0xb5, 0xfb, 0xfb, 0xfb, 0x1b, 0xfd,
    0xb5, 0xfa, 0x62, 0xfd, 0xb5, 0xfb, 0xfb, 0xfb, 0x1b, 0xfd, 0xb5, 0xfa, 0x62, 0xfd, 0xb5, 0xfb,
    0xfb, 0xfb, 0x13, 0xfd, 0xbd, 0xfa, 0x62, 0xfd, 0xbd, 0xfb, 0xfb, 0xfb, 0x0b, 0xfd, 0xbd, 0xfa,
    0x62, 0xfd, 0xbd, 0xfb, 0xfb, 0xfb, 0x0b, 0xfd, 0xbd, 0xfa, 0x62, 0xfd, 0xbd, 0xfb, 0xfb, 0xfb,
    0x0b, 0xfd, 0xbd, 0xfa, 0x62, 0xfd, 0xbd, 0xfb, 0xfb, 0xfb, 0x0b, 0xfd, 0xbd, 0xfa, 0x62, 0xfd,
    0xbd, 0xfb, 0xfb, 0xfb, 0x03, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5,
    0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb,
    0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb,
    0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd,
    0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa,
    0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd,
    0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb,
    0xf3, 0xfd, 0xcd, 0xaa, 0x01, 0xaa, 0xfd, 0xcd, 0xfb, 0xfb, 0xf3, 0xfd, 0xc5, 0xfa, 0x62, 0xfd,
    0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa,
    0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd,
    0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb,
    0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5,
    0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62,
    0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5, 0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0xfd, 0xc5,
    0xfa, 0x62, 0xfd, 0xc5, 0xfb, 0xfb, 0xfb, 0x03, 0xfd, 0xbd, 0xfa, 0x62, 0xfd, 0xbd, 0xfb, 0xfb,
    0xfb, 0x0b, 0xfd, 0xbd, 0xfa, 0x62, 0xfd, 0xbd, 0xfb, 0xfb, 0xfb, 0x0b, 0xfd, 0xbd, 0xfa, 0x62,
    0xfd, 0xbd, 0xfb, 0xfb, 0xfb, 0x0b, 0xfd, 0xbd, 0xfa, 0x62, 0xfd, 0xbd, 0xfb, 0xfb, 0xfb, 0x0b,
    0xfd, 0xbd, 0xfa, 0x62, 0xfd, 0xbd, 0xfb, 0xfb, 0xfb, 0x13, 0xfd, 0xb5, 0xfa, 0x62, 0xfd, 0xb5,
    0xfb, 0xfb, 0xfb, 0x1b, 0xfd, 0xb5, 0xfa, 0x62, 0xfd, 0xb5, 0xfb, 0xfb, 0xfb, 0x1b, 0xfd, 0xb5,
    0xfa, 0x62, 0xfd, 0xb5, 0xfb, 0xfb, 0xfb, 0x1b, 0xfd, 0xb5, 0xfa, 0x62, 0xfd, 0xb5, 0xfb, 0xfb,
    0xfb, 0x23, 0xfd, 0xad, 0xfa, 0x62, 0xfd, 0xad, 0xfb, 0xfb, 0xfb, 0x2b, 0xfe, 0xae, 0xfd, 0xfd,
    0xfd, 0x15, 0xfb, 0xfb, 0xfb, 0x13, 0x14, 0xfe, 0xae, 0xfd, 0xfd, 0xfd, 0x15, 0xfb, 0xfb, 0xf3,
    0x3c, 0xfe, 0xa6, 0xfd, 0xfd, 0xfd, 0x0d, 0xfb, 0xfb, 0xe3, 0x54, 0xfe, 0xa6, 0xfd, 0xfd, 0xfd,
    0x0d, 0xfb, 0xfb, 0xcb, 0x6c, 0xfe, 0xa6, 0xfd, 0xfd, 0xfd, 0x0d, 0xfb, 0xfb, 0xab, 0x94, 0xfe,
    0x96, 0xfd, 0xfd, 0xfd, 0x0d, 0xfb, 0xfb, 0x9b, 0xac, 0xfe, 0x8e, 0xfd, 0xfd, 0xfd, 0x15, 0xfb,
    0xfb, 0x83, 0xc4, 0xfe, 0x86, 0xfd, 0xfd, 0xfd, 0x1d, 0xfb, 0xfb, 0x63, 0xec, 0xfe, 0x76, 0xfd,
    0xfd, 0xfd, 0x1d, 0xfb, 0xfb, 0x53, 0xfc, 0x04, 0xfe, 0x76, 0xfd, 0xfd, 0xfd, 0x1d, 0xfb, 0xfb,
    0x3b, 0xfc, 0x24, 0xfe, 0x66, 0xfd, 0xfd, 0xfd, 0x1d, 0xfb, 0xfb, 0x2b, 0xfc, 0x3c, 0xfe, 0x5e,
    0xfd, 0xfd, 0xfd, 0x25, 0xfb, 0xfb, 0x0b, 0xfc, 0x64, 0xfe, 0x4e, 0xfd, 0xfd, 0xfd, 0x25, 0xfb,
    0xfb, 0xfc, 0x7c, 0xfe, 0x46, 0xfd, 0xfd, 0xfd, 0x2d, 0xfb, 0xe3, 0xfc, 0x9c, 0xfe, 0x36, 0xfd,
    0xfd, 0xfd, 0x2d, 0xfb, 0xcb, 0xfc, 0xbc, 0xfe, 0x36, 0xfd, 0xfd, 0xfd, 0x2d, 0xfb, 0xc3, 0xfc,
    0xcc, 0xfe, 0x26, 0xfd, 0xfd, 0xfd, 0x2d, 0xfb, 0xcb, 0xfc, 0xcc, 0xfe, 0x1e, 0xfd, 0xfd, 0xfd,
    0x35, 0xfb, 0xcb, 0xfc, 0xd4, 0xfe, 0x0e, 0xfd, 0xfd, 0xfd, 0x35, 0xfb, 0xd3, 0xfc, 0xd4, 0xfe,
    0x06, 0xfd, 0xfd, 0xfd, 0x3d, 0xfb, 0xd3, 0xfc, 0xdc, 0xf6, 0xfd, 0xfd, 0xfd, 0x3d, 0xfb, 0xdb,
    0xfc, 0xe4, 0xee, 0xfd, 0xfd, 0xfd, 0x35, 0xfb, 0xe3, 0xfc, 0xe4, 0xe6, 0xfd, 0xfd, 0xfd, 0x3d,
    0xfb, 0xe3, 0xfc, 0xec, 0xd6, 0xfd, 0xfd, 0xfd, 0x3d, 0xfb, 0xeb, 0xfc, 0xf4, 0xc6, 0xfd, 0xfd,
    0xfd, 0x3d, 0xfb, 0xf3, 0xfc, 0xf4, 0xbe, 0xfd, 0xfd, 0xfd, 0x45, 0xfb, 0xf3, 0xfc, 0xfc, 0xae,
    0xfd, 0xfd, 0xfd, 0x45, 0xfb, 0xfb, 0xfc, 0xfc, 0x04, 0xa6, 0xfd, 0xfd, 0xfd, 0x3d, 0xfb, 0xfb,
    0x03, 0xfc, 0xfc, 0x0c, 0x96, 0xfd, 0xfd, 0xfd, 0x3d, 0xfb, 0xfb, 0x0b, 0xfc, 0xfc, 0x14, 0x86,
    0xfd, 0xfd, 0xfd, 0x3d, 0xfb, 0xfb, 0x13, 0xfc, 0xfc, 0x1c, 0x76, 0xfa, 0xfa, 0xfa, 0x3a, 0xfb,
    0xfb, 0x1b, 0xfc, 0xfc, 0x1c, 0x6e, 0xfa, 0xfa, 0xfa, 0x42, 0x09, 0xfb, 0xfb, 0x0b, 0xfc, 0xfc,
    0x24, 0x5e, 0xfa, 0xfa, 0xfa, 0x42, 0x19, 0xfb, 0xfb, 0x03, 0xfc, 0xfc, 0x2c, 0x56, 0xfa, 0xfa,
    0xfa, 0x3a, 0x29, 0xfb, 0xfb, 0xfc, 0xfc, 0x34, 0x46, 0xfa, 0xfa, 0xfa, 0x3a, 0x39, 0xfb, 0xf3,
    0xfc, 0xfc, 0x3c, 0x36, 0xfa, 0xfa, 0xfa, 0x3a, 0x49, 0xfb, 0xeb, 0xfc, 0xfc, 0x44, 0x26, 0xfa,
    0xfa, 0xfa, 0x3a, 0x59, 0xfb, 0xe3, 0xfc, 0xfc, 0x54, 0x0e, 0xfa, 0xfa, 0xfa, 0x32, 0x71, 0xfb,
    0xdb, 0xfc, 0xfc, 0x5c, 0xfa, 0xfa, 0xfa, 0x32, 0x81, 0xfb, 0xd3, 0xfc, 0xfc, 0x54, 0x09, 0xfa,
    0xfa, 0xfa, 0x22, 0x99, 0xfb, 0xc3, 0xfc, 0xfc, 0x4c, 0x19, 0xfa, 0xfa, 0xfa, 0x12, 0xa9, 0xfb,
    0xbb, 0xfc, 0xfc, 0x44, 0x29, 0xfa, 0xfa, 0xfa, 0x02, 0xb9, 0xfb, 0xb3, 0xfc, 0xfc, 0x3c, 0x41,
    0xfa, 0xfa, 0xe2, 0xd1, 0xfb, 0xab, 0xfc, 0xfc, 0x34, 0x51, 0xfa, 0xfa, 0xd2, 0xe1, 0xfb, 0xa3,
    0xfc, 0xfc, 0x34, 0x61, 0xfa, 0xfa, 0xb2, 0xf9, 0xfb, 0x9b, 0xfc, 0xfc, 0x2c, 0x71, 0xfa, 0xfa,
    0xa2, 0xf9, 0x09, 0xfb, 0x93, 0xfc, 0xfc, 0x24, 0x89, 0xfa, 0xfa, 0x82, 0xf9, 0x29, 0xfb, 0x83,
    0xfc, 0xfc, 0x1c, 0xa1, 0xfa, 0xfa, 0x62, 0xf9, 0x41, 0xfb, 0x7b, 0xfc, 0xfc, 0x14, 0xb9, 0xfa,
    0xfa, 0x42, 0xf9, 0x59, 0xfb, 0x73, 0xfc, 0xfc, 0x0c, 0xd1, 0xfa, 0xfa, 0x22, 0xf9, 0x71, 0xfb,
    0x6b, 0xfc, 0xfc, 0x0c, 0xe1, 0xfa, 0xfa, 0x02, 0xf9, 0x89, 0xfb, 0x63, 0xfc, 0xfc, 0x04, 0xf9,
    0xfa, 0xe2, 0xf9, 0xa1, 0xfb, 0x5b, 0xfc, 0xfc, 0xf9, 0x19, 0xfa, 0xb2, 0xf9, 0xc1, 0xfb, 0x53,
    0xfc, 0xf4, 0xf9, 0x39, 0xfa, 0x82, 0xf9, 0xe1, 0xfb, 0x4b, 0xfc, 0xec, 0xf9, 0x59, 0xfa, 0x52,
    0xf9, 0xf9, 0x09, 0xfb, 0x3b, 0xfc, 0xe4, 0xf9, 0x81, 0xfa, 0x12, 0xf9, 0xf9, 0x31, 0xfb, 0x33,
    0xfc, 0xdc, 0xf9, 0xb1, 0xc2, 0xf9, 0xf9, 0x61, 0xfb, 0x2b, 0xfc, 0xdc, 0xf9, 0xf9, 0x11, 0x02,
    0xf9, 0xf9, 0xc9, 0xfb, 0x23, 0xfc, 0xd4, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xfb, 0x1b, 0xfc, 0xcc,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x09, 0xfb, 0x13, 0xfc, 0xc4, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x21,
    0xfb, 0x03, 0xfc, 0xbc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x31, 0xfb, 0xfc, 0xb4, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0x41, 0xf3, 0xfc, 0xb4, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x49, 0xeb, 0xfc, 0xac, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0x59, 0xe3, 0xfc, 0xa4, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x69, 0xdb, 0xfc,
    0x9c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x79, 0xd3, 0xfc, 0x94, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x89,
    0xcb, 0xfc, 0x8c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xa1, 0xbb, 0xfc, 0x84, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xb1, 0xb3, 0xfc, 0x84, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xb9, 0xab, 0xfc, 0x7c, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xc9, 0xa3, 0xfc, 0x74, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xd9, 0x9b, 0xfc, 0x6c,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xe9, 0x93, 0xfc, 0x64, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x8b,
    0xfc, 0x5c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x11, 0x7b, 0xfc, 0x5c, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0x19, 0x73, 0xfc, 0x54, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x29, 0x6b, 0xfc, 0x4c,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x39, 0x63, 0xfc, 0x44, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0x49, 0x5b, 0xfc, 0x3c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x59, 0x53, 0xfc, 0x34, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0x69, 0x4b, 0xfc, 0x34, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x71, 0x43,
    0xfc, 0x2c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x89, 0x33, 0xfc, 0x24, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0x99, 0x2b, 0xfc, 0x1c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xa9, 0x23, 0xfc, 0x14,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xb9, 0x1b, 0xfc, 0x0c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xc9, 0x13, 0xfc, 0x04, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xd9, 0x0b, 0xfc, 0x04, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xe1, 0x03, 0xfc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf1, 0xf4, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xec, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x01, 0xe4,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x09, 0xdc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0x11, 0xd4, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x19, 0xd4, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0x19, 0xcc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x21, 0xc4, 0xf9, 0xf9, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0x29, 0xbc, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x31, 0xb4, 0xf9,
    0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x39, 0xac, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x41,
    0xac, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x41, 0xa4, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9,
    0xf9, 0x49, 0x9c, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x51
};
