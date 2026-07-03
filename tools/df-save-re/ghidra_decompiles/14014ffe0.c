// FUN_14014ffe0 @ 14014ffe0
// callees:


uint FUN_14014ffe0(longlong param_1,short param_2,short param_3,byte param_4,byte param_5)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x92 + ((longlong)param_2 * 0x10 + (longlong)param_3) * 2);
  if (uVar1 < 0x17a) {
    if (uVar1 == 0x179) {
      return (uint)param_5;
    }
    uVar2 = 0;
    switch(uVar1 - 1) {
    case 0:
    case 0x1f:
    case 0x22:
    case 0x29:
      return 1;
    case 4:
    case 5:
    case 0x18:
    case 0x19:
    case 0x23:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x30:
    case 0x31:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x37:
    case 0x39:
    case 0x3a:
    case 0x3c:
    case 0x3d:
    case 0x47:
    case 0x48:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x92:
    case 0x93:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
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
switchD_140150025_caseD_4:
      return (uint)param_4;
    }
  }
  else {
    uVar2 = uVar1 - 0x1ff;
    if (uVar2 < 2) goto switchD_140150025_caseD_4;
  }
  return uVar2 & 0xffffff00;
}

