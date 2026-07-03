// FUN_140103280 @ 140103280
// callees:


undefined8 FUN_140103280(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x68) < 1) {
    return 0xffffffff;
  }
  *param_2 = *(int *)(param_1 + 0x68);
  uVar3 = 0x11;
  if (0x1d < *(int *)(param_1 + 0x68)) {
    uVar3 = 0x10;
    *param_2 = 0x1e;
  }
  if (0x31 < *(int *)(param_1 + 0x60)) {
    uVar3 = 0xd;
    *param_2 = 300;
  }
  if (*(int *)(param_1 + 0x60) < -0x31) {
    uVar3 = 0xe;
    *param_2 = 200;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  for (puVar2 = *(undefined4 **)(param_1 + 0x20); puVar2 < puVar1; puVar2 = puVar2 + 1) {
    switch(*puVar2) {
    case 3:
      if (*param_2 < 500) {
        *param_2 = 500;
        uVar3 = 0x12;
      }
      break;
    case 4:
      if (*param_2 < 10) {
        *param_2 = 10;
        uVar3 = 0x14;
      }
      break;
    case 5:
      if (*param_2 < 0x14) {
        *param_2 = 0x14;
        uVar3 = 0x15;
      }
      break;
    case 6:
      if (*param_2 < 0x1e) {
        *param_2 = 0x1e;
        uVar3 = 0x16;
      }
      break;
    case 7:
      if (*param_2 < 0x19) {
        *param_2 = 0x19;
        uVar3 = 0x17;
      }
      break;
    case 8:
      if (*param_2 < 0x15) {
        *param_2 = 0x15;
        uVar3 = 0x18;
      }
      break;
    case 9:
      if (*param_2 < 0x16) {
        *param_2 = 0x16;
        uVar3 = 0x19;
      }
      break;
    case 10:
      if (*param_2 < 0x4b) {
        *param_2 = 0x4b;
        uVar3 = 0x1a;
      }
      break;
    case 0xb:
      if (*param_2 < 6) {
        *param_2 = 6;
        uVar3 = 0x1b;
      }
      break;
    case 0xc:
      if (*param_2 < 7) {
        *param_2 = 7;
        uVar3 = 0x1c;
      }
      break;
    case 0xd:
      if (*param_2 < 9) {
        *param_2 = 9;
        uVar3 = 0x1d;
      }
      break;
    case 0xe:
      if (*param_2 < 8) {
        *param_2 = 8;
        uVar3 = 0x1e;
      }
      break;
    case 0xf:
      if (*param_2 < 5) {
        *param_2 = 5;
        uVar3 = 0x1f;
      }
      break;
    case 0x10:
      if (*param_2 < 0x11) {
        *param_2 = 0x11;
        uVar3 = 0x20;
      }
      break;
    case 0x11:
      if (*param_2 < 0x28) {
        *param_2 = 0x28;
        uVar3 = 0x21;
      }
      break;
    case 0x12:
      if (*param_2 < 0x3c) {
        *param_2 = 0x3c;
        uVar3 = 0x22;
      }
      break;
    case 0x13:
      if (*param_2 < 0xe) {
        *param_2 = 0xe;
        uVar3 = 0x35;
      }
      break;
    case 0x14:
      if (*param_2 < 0xd) {
        *param_2 = 0xd;
        uVar3 = 0x24;
      }
      break;
    case 0x15:
      if (*param_2 < 0xc) {
        *param_2 = 0xc;
        uVar3 = 0x25;
      }
      break;
    case 0x16:
      if (*param_2 < 0xb) {
        *param_2 = 0xb;
        uVar3 = 0x26;
      }
      break;
    case 0x17:
      if (*param_2 < 4) {
        *param_2 = 4;
        uVar3 = 0x2c;
      }
      break;
    case 0x18:
      if (*param_2 < 3) {
        *param_2 = 3;
        uVar3 = 0x2d;
      }
      break;
    case 0x19:
      if (*param_2 < 0x10) {
        *param_2 = 0x10;
        uVar3 = 0x2e;
      }
      break;
    case 0x1a:
      if (*param_2 < 0x2d) {
        *param_2 = 0x2d;
        uVar3 = 0x2f;
      }
      break;
    case 0x1b:
      if (*param_2 < 0x1f) {
        *param_2 = 0x1f;
        uVar3 = 0x30;
      }
      break;
    case 0x1c:
      if (*param_2 < 0x12) {
        *param_2 = 0x12;
        uVar3 = 0x31;
      }
      break;
    case 0x1d:
      if (*param_2 < 300) {
        *param_2 = 300;
        uVar3 = 0xd;
      }
      break;
    case 0x1e:
      if (*param_2 < 0x20) {
        *param_2 = 0x20;
        uVar3 = 0x32;
      }
      break;
    case 0x1f:
      if (*param_2 < 0x37) {
        *param_2 = 0x37;
        uVar3 = 0x34;
      }
      break;
    case 0x20:
      if (*param_2 < 0xf) {
        *param_2 = 0xf;
        uVar3 = 0x23;
      }
    }
  }
  return uVar3;
}

