// FUN_140c323c0 @ 140c323c0
// callees:
//   -> 1402b5f70 FUN_1402b5f70
//   -> 14000d840 FUN_14000d840


void FUN_140c323c0(undefined2 param_1,short param_2,short param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  
  FUN_1402b5f70(&DAT_141d6dd30);
  if (((-1 < param_2) &&
      ((ulonglong)(longlong)param_2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (-1 < param_3)) {
    lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_2 * 8);
    if (((ulonglong)(longlong)param_3 <
         (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) &&
       (cVar2 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8) +
                              0x6a8,0x29), cVar2 != '\0')) {
      if (DAT_141271228 != DAT_141271229) {
        return;
      }
      if (DAT_14127122a != '\0') {
        return;
      }
      if (DAT_141271229 == '\0') {
        return;
      }
      DAT_141271228 = 0;
      return;
    }
  }
  switch(param_1) {
  case 0:
  case 0x4a:
  case 0x51:
  case 0x82:
    DAT_141271228 = '\a';
    DAT_14127122a = '\0';
    DAT_141271229 = param_4;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 0x4e:
  case 0x5a:
    DAT_141271228 = '\x06';
    goto LAB_140c324c3;
  case 5:
  case 6:
  case 7:
  case 0x52:
  case 0x62:
  case 0x83:
  case 0x84:
  case 0x85:
    DAT_141271228 = '\a';
    goto LAB_140c324c3;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x4f:
  case 0x5b:
    DAT_141271228 = '\x02';
    goto LAB_140c324df;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 99:
  case 100:
  case 0x65:
  case 0x81:
    DAT_141271228 = '\0';
    goto LAB_140c324c3;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x50:
  case 0x5c:
    DAT_141271228 = '\x02';
    goto LAB_140c324c3;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x54:
  case 0x7e:
  case 0x7f:
    DAT_141271228 = '\x01';
    DAT_14127122a = '\x01';
    DAT_141271229 = param_4;
    break;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x53:
    DAT_141271228 = '\x01';
LAB_140c324df:
    DAT_14127122a = '\0';
    DAT_141271229 = param_4;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x4d:
  case 0x59:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    DAT_141271228 = '\x06';
    DAT_14127122a = '\0';
    DAT_141271229 = param_4;
    break;
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x58:
    DAT_141271228 = '\x04';
    goto LAB_140c324c3;
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4b:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x80:
  case 0x86:
    DAT_141271228 = '\x05';
    DAT_14127122a = '\0';
    DAT_141271229 = param_4;
    break;
  case 0x4c:
    DAT_141271228 = '\x05';
    goto LAB_140c324c3;
  case 0x55:
    DAT_141271228 = '\x03';
    DAT_14127122a = '\0';
    DAT_141271229 = param_4;
    break;
  case 0x56:
    DAT_141271228 = '\x03';
LAB_140c324c3:
    DAT_14127122a = '\x01';
    DAT_141271229 = param_4;
    break;
  case 0x57:
  case 0x67:
  case 0x68:
    DAT_141271228 = '\x04';
    DAT_14127122a = '\0';
    DAT_141271229 = param_4;
    break;
  default:
  }
  if (((DAT_141271228 == DAT_141271229) && (DAT_14127122a == '\0')) && (DAT_141271229 != '\0')) {
    DAT_141271228 = '\0';
  }
  return;
}

