// FUN_14084ceb0 @ 14084ceb0
// callees:
//   -> 140071310 FUN_140071310


ulonglong FUN_14084ceb0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == 0xffff) {
LAB_14084ced6:
    uVar3 = 0;
    switch(*(undefined2 *)(param_2 + 0x14)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
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
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
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
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x94:
    case 0x95:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 0xca:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
switchD_14084cefb_caseD_0:
      return uVar3 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(ushort *)(param_2 + 0x14) != uVar1) goto switchD_14084cefb_caseD_0;
    if (uVar1 == 0xffff) goto LAB_14084ced6;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  uVar3 = (ulonglong)uVar1;
  if ((uVar1 == *(ushort *)(param_2 + 0x3a)) || (uVar1 == 0xffff)) {
    uVar1 = *(ushort *)(param_1 + 0x30);
    uVar3 = (ulonglong)uVar1;
    if ((uVar1 == *(ushort *)(param_2 + 0x30)) || (uVar1 == 0xffff)) {
      uVar2 = *(uint *)(param_1 + 0x34);
      uVar3 = (ulonglong)uVar2;
      if ((uVar2 == *(uint *)(param_2 + 0x34)) || (uVar2 == 0xffffffff)) {
        uVar1 = *(ushort *)(param_1 + 8);
        uVar3 = (ulonglong)uVar1;
        if (((uVar1 == *(ushort *)(param_2 + 0x3c)) || (uVar1 == 0xffff)) &&
           ((((uVar3 = FUN_140071310(param_1 + 0x10,param_2 + 0x50), (int)uVar3 == 0 ||
              (*(longlong *)(param_1 + 0x20) == 0)) &&
             (uVar3 = (ulonglong)*(uint *)(param_2 + 0x40),
             *(uint *)(param_1 + 0x38) == *(uint *)(param_2 + 0x40))) &&
            (uVar3 = (ulonglong)*(uint *)(param_2 + 0x44),
            *(uint *)(param_1 + 0x3c) == *(uint *)(param_2 + 0x44))))) {
          return (ulonglong)
                 CONCAT31((int3)((uint)*(int *)(param_2 + 0x48) >> 8),
                          *(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x48));
        }
      }
    }
  }
  goto switchD_14084cefb_caseD_0;
}

