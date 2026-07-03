// FUN_1407d68c0 @ 1407d68c0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 140010c40 FUN_140010c40
//   -> 140dfb5c4 operator_new
//   -> 1407d5970 FUN_1407d5970
//   -> 1407d6010 FUN_1407d6010
//   -> 1407d5f30 FUN_1407d5f30
//   -> 1407d5cb0 FUN_1407d5cb0


void FUN_1407d68c0(longlong param_1,undefined8 param_2,char param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char local_res18 [8];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_140002250(param_2,param_1 + 8);
  if (param_4 < 0x621) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x20,4);
    FUN_1405bba90(param_2,param_1 + 0x24,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_140010c40(param_1 + 0x30,param_2,param_4);
  FUN_1405bba90(param_2,param_1 + 0x58,4);
  FUN_1405bba90(param_2,param_1 + 0x5c,4);
  FUN_1405bba90(param_2,param_1 + 0x60,4);
  FUN_1405bba90(param_2,param_1 + 100,4);
  FUN_1405bba90(param_2,param_1 + 0x68,4);
  FUN_140010c40(param_1 + 0x70,param_2,param_4);
  FUN_1405bba90(param_2,param_1 + 0x98,4);
  FUN_1405bba90(param_2,param_1 + 0x9c,4);
  FUN_1405bba90(param_2,param_1 + 0xa0,4);
  FUN_1405bba90(param_2,param_1 + 0xd0,4);
  FUN_1405bba90(param_2,param_1 + 0xe4,4);
  FUN_1405bba90(param_2,param_1 + 0xe8,4);
  FUN_1405bba90(param_2,param_1 + 0xec,4);
  FUN_1405bba90(param_2,param_1 + 0xf0,2);
  FUN_1405bba90(param_2,param_1 + 0xd4,4);
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  FUN_1405bba90(param_2,param_1 + 0xdc,4);
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_1405bba90(param_2,param_1 + 0xf4,4);
  FUN_1405bba90(param_2,param_1 + 0xf8,4);
  FUN_1405bba90(param_2,param_1 + 0xfc,4);
  FUN_1405bba90(param_2,param_1 + 0x100,4);
  FUN_1405bba90(param_2,param_1 + 0x104,4);
  FUN_1405bba90(param_2,param_1 + 0x108,4);
  if (param_4 < 0x695) {
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x10c,4);
  }
  FUN_140010c40(param_1 + 0xa8,param_2,param_4);
  if (param_4 < 0x621) {
    if ((param_4 < 0x5e1) || (FUN_1405bba90(param_2,local_res18,1), local_res18[0] == '\0')) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      if (*(int *)(param_1 + 4) != 6) {
        return;
      }
      puVar3 = operator_new(0x38);
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      *puVar3 = 0xffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0xc) = 0xffffffffffffffff;
      *(undefined4 **)(param_1 + 0x110) = puVar3;
      return;
    }
  }
  else {
    if (param_4 < 0x627) {
      FUN_1405bba90(param_2,local_res18,1);
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 6) {
      if (iVar1 == 7) {
        puVar2 = operator_new(0x88);
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[1] = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[6] = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 7) = 0xffffffff;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = 0xffffffffffffffff;
        puVar2[0xb] = 0xffffffffffffffff;
        puVar2[0xc] = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 0x10) = 0xffffffff;
        *(undefined8 **)(param_1 + 0x110) = puVar2;
        FUN_1407d5f30(puVar2,param_2,param_4);
        return;
      }
      if (iVar1 == 8) {
        puVar2 = operator_new(0x88);
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[1] = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[6] = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 7) = 0xffffffff;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = 0xffffffffffffffff;
        puVar2[0xb] = 0xffffffffffffffff;
        puVar2[0xc] = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 0x10) = 0xffffffff;
        *(undefined8 **)(param_1 + 0x110) = puVar2;
        FUN_1407d6010(puVar2,param_2,param_4);
        return;
      }
      if (iVar1 == 9) {
        puVar2 = operator_new(0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *(undefined8 **)(param_1 + 0x110) = puVar2;
        FUN_1407d5970(puVar2,param_2,param_4);
        return;
      }
      if (iVar1 == 10) {
        puVar2 = operator_new(0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *(undefined8 **)(param_1 + 0x110) = puVar2;
        FUN_1407d5970(puVar2,param_2,param_4);
        return;
      }
      return;
    }
  }
  puVar3 = operator_new(0x38);
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *puVar3 = 0xffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0xc) = 0xffffffffffffffff;
  *(undefined4 **)(param_1 + 0x110) = puVar3;
  FUN_1407d5cb0(puVar3,param_2,param_4);
  return;
}

