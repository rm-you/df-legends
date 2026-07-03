// FUN_1400b6a80 @ 1400b6a80
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 140dfb5c4 operator_new
//   -> 1400b54b0 FUN_1400b54b0
//   -> 1400b4c90 FUN_1400b4c90
//   -> 1400b4ed0 FUN_1400b4ed0
//   -> 1400b51d0 FUN_1400b51d0
//   -> 1400b5780 FUN_1400b5780
//   -> 1400b59a0 FUN_1400b59a0
//   -> 1400b5bb0 FUN_1400b5bb0
//   -> 1400b5d90 FUN_1400b5d90
//   -> 1400b4990 FUN_1400b4990


void FUN_1400b6a80(longlong param_1,undefined8 param_2,char param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char local_res18 [8];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 0x78,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 0xc0,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  if (param_4 < 0x62a) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0xc,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_140002250(param_2,param_1 + 0x20);
  switch(*(undefined4 *)(param_1 + 0xc0)) {
  case 1:
    puVar2 = operator_new(0xc);
    *puVar2 = 0;
    *(undefined4 **)(param_1 + 0xb8) = puVar2;
    if (0x59c < param_4) {
      FUN_1405bba90(param_2,puVar2,4);
      FUN_1405bba90(param_2,puVar2 + 1,4);
      puVar4 = (undefined8 *)(puVar2 + 2);
      goto LAB_1400b7134;
    }
    break;
  case 2:
    puVar2 = operator_new(0x80);
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    *(undefined8 *)(puVar2 + 0x1c) = 0;
    *(undefined8 *)(puVar2 + 0x1e) = 0;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    *(undefined8 *)(puVar2 + 2) = 0xffffffffffffffff;
    puVar2[0x16] = 0;
    *(undefined8 *)(puVar2 + 0x17) = 0xffffffffffffffff;
    *(undefined4 **)(param_1 + 0xb8) = puVar2;
    FUN_1400b54b0(puVar2,param_2,param_4);
    if (param_4 < 0x648) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + 0x58);
      *puVar1 = *puVar1 | 8;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + 0x58);
      *puVar1 = *puVar1 | 0x10;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + 0x58);
      *puVar1 = *puVar1 | 0x20;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + 0x58);
      *puVar1 = *puVar1 | 0x40;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + 0x58);
      *puVar1 = *puVar1 | 0x80;
      if (**(int **)(param_1 + 0xb8) == 3) {
        puVar1 = (uint *)(*(int **)(param_1 + 0xb8) + 0x16);
        *puVar1 = *puVar1 | 4;
      }
    }
    break;
  case 3:
  case 8:
  case 9:
  case 10:
    break;
  case 4:
  case 0x12:
  case 0x15:
  case 0x16:
    puVar2 = operator_new(8);
    *puVar2 = 0xffffffff;
    puVar4 = (undefined8 *)(puVar2 + 1);
    *(undefined4 *)puVar4 = 0;
    *(undefined4 **)(param_1 + 0xb8) = puVar2;
    FUN_1405bba90(param_2,puVar2,4);
    goto LAB_1400b7134;
  case 5:
    pvVar3 = operator_new(0x14);
    *(void **)(param_1 + 0xb8) = pvVar3;
    FUN_1405bba90(param_2,pvVar3,4);
    FUN_1405bba90(param_2,(longlong)pvVar3 + 4,4);
    FUN_1405bba90(param_2,(longlong)pvVar3 + 8,4);
    FUN_1405bba90(param_2,(longlong)pvVar3 + 0xc,4);
    puVar4 = (undefined8 *)((longlong)pvVar3 + 0x10);
    goto LAB_1400b7134;
  case 6:
    puVar7 = operator_new(0x24);
    *puVar7 = 0xffffffffffffffff;
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x14) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 0xb8) = puVar7;
    FUN_1400b4c90(puVar7,param_2);
    break;
  case 7:
    puVar7 = operator_new(0x40);
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0xffffffffffffffff;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar7 + 0x34) = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 0xb8) = puVar7;
    FUN_1400b4ed0(puVar7,param_2);
    break;
  case 0xb:
    puVar7 = operator_new(0x20);
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 0xb8) = puVar7;
    FUN_1400b5780(puVar7,param_2);
    break;
  case 0xc:
    puVar7 = operator_new(0x38);
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    *puVar7 = 0xffffffffffffffff;
    puVar7[5] = 0xffffffffffffffff;
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar7[6] = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 0xb8) = puVar7;
    FUN_1400b59a0(puVar7,param_2,param_4);
    break;
  case 0xd:
    puVar2 = operator_new(0x28);
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *puVar2 = 0;
    *(undefined4 **)(param_1 + 0xb8) = puVar2;
    FUN_1400b5bb0(puVar2,param_2);
    break;
  case 0xe:
    puVar2 = operator_new(0x30);
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *puVar2 = 0;
    puVar2[10] = 0xffffffff;
    *(undefined4 **)(param_1 + 0xb8) = puVar2;
    FUN_1400b5d90(puVar2,param_2,param_4);
    break;
  case 0xf:
    puVar7 = operator_new(0x48);
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0xffffffffffffffff;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar7 + 0x34) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar7 + 0x3c) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar7 + 0x44) = 0xffffffff;
    *(undefined8 **)(param_1 + 0xb8) = puVar7;
    FUN_1400b51d0(puVar7,param_2);
    break;
  case 0x10:
    puVar4 = operator_new(4);
    *(undefined4 *)puVar4 = 0;
    *(undefined8 **)(param_1 + 0xb8) = puVar4;
    goto LAB_1400b7134;
  case 0x11:
    puVar2 = operator_new(0x10);
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0;
    *puVar2 = 0xffffffff;
    *(undefined4 **)(param_1 + 0xb8) = puVar2;
    puVar4 = (undefined8 *)(puVar2 + 3);
    FUN_1405bba90(param_2,puVar2,4);
    if (0x6a2 < param_4) {
      FUN_1405bba90(param_2,puVar2 + 1,4);
      FUN_1405bba90(param_2,puVar2 + 2,4);
    }
    goto LAB_1400b7134;
  case 0x13:
    puVar6 = operator_new(0x28);
    *puVar6 = 0;
    puVar7 = puVar6 + 3;
    puVar6[1] = 0;
    puVar2 = (undefined4 *)((longlong)puVar6 + 0x1c);
    puVar6[2] = 0;
    puVar4 = puVar6 + 4;
    *(undefined4 *)puVar7 = 0;
    *puVar2 = 0xffffffff;
    *(undefined4 *)puVar4 = 0xffffffff;
    *(undefined8 **)(param_1 + 0xb8) = puVar6;
    FUN_140002250(param_2,puVar6);
    goto LAB_1400b710f;
  case 0x14:
    puVar2 = operator_new(0xc);
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0;
    *puVar2 = 0xffffffff;
    puVar4 = (undefined8 *)(puVar2 + 2);
    *(undefined4 **)(param_1 + 0xb8) = puVar2;
    FUN_1405bba90(param_2,puVar2,4);
    FUN_1405bba90(param_2,puVar2 + 1,4);
    goto LAB_1400b7134;
  case 0x17:
    puVar5 = operator_new(0x10);
    puVar5[2] = 0xffffffff;
    puVar5[3] = 0;
    puVar7 = (undefined8 *)(puVar5 + 2);
    puVar2 = puVar5 + 1;
    goto LAB_1400b70e6;
  case 0x18:
    puVar5 = operator_new(0x10);
    puVar5[1] = 0;
    puVar5[3] = 0xffffffff;
    puVar7 = (undefined8 *)(puVar5 + 1);
    puVar2 = puVar5 + 2;
LAB_1400b70e6:
    puVar4 = (undefined8 *)(puVar5 + 3);
    *puVar5 = 0xffffffff;
    *puVar2 = 0xffffffff;
    *(undefined4 **)(param_1 + 0xb8) = puVar5;
    FUN_1405bba90(param_2,puVar5,4);
LAB_1400b710f:
    FUN_1405bba90(param_2,puVar7,4);
    FUN_1405bba90(param_2,puVar2,4);
LAB_1400b7134:
    FUN_1405bba90(param_2,puVar4,4);
    break;
  default:
    goto switchD_1400b6ba9_default;
  }
switchD_1400b6ba9_default:
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  FUN_1405bba90(param_2,param_1 + 0x4c,4);
  FUN_140002250(param_2,param_1 + 0x60);
  if (0x62b < param_4) {
    FUN_140002250(param_2,param_1 + 0x80);
  }
  if (0x656 < param_4) {
    FUN_140002250(param_2,param_1 + 0x98);
  }
  if ((param_4 < 0x62f) || (FUN_1405bba90(param_2,local_res18,1), local_res18[0] == '\0')) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  else {
    puVar7 = operator_new(0x78);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[8] = 0xf;
    puVar7[7] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[3] = 0xffffffffffffffff;
    puVar7[4] = 0xffffffffffffffff;
    *(undefined4 *)(puVar7 + 9) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x4c) = 0xffffffffffffffff;
    puVar7[0xe] = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 0xb0) = puVar7;
    FUN_1400b4990(puVar7,param_2,param_4);
  }
  if (param_4 < 0x673) {
    *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x50,4);
    FUN_1405bba90(param_2,param_1 + 0x54,4);
  }
  if (param_4 < 0x691) {
    *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
    return;
  }
  FUN_1405bba90(param_2,param_1 + 0x58,4);
  FUN_1405bba90(param_2,param_1 + 0x5c,4);
  return;
}

