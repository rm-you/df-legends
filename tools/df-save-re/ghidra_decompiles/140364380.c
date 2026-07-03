// FUN_140364380 @ 140364380
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1403642d0 FUN_1403642d0


void FUN_140364380(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int local_res8 [2];
  
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1,(longlong)local_res8[0]);
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < local_res8[0]) {
    do {
      puVar1 = operator_new(0x48);
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      *puVar1 = 0xffffffff;
      puVar1[2] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined4 **)(uVar2 + *param_1) = puVar1;
      FUN_1403642d0(*(undefined8 *)(uVar2 + *param_1),param_2,param_3);
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < local_res8[0]);
  }
  return;
}

