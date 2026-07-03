// FUN_140339a40 @ 140339a40
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1400020a0 FUN_1400020a0
//   -> 140b0cc80 FUN_140b0cc80
//   -> 1400021b0 FUN_1400021b0


void FUN_140339a40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x78);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1403159b0(param_1,param_2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x7c));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400020a0(param_2,param_1 + 0x80);
  FUN_1400020a0(param_2,param_1 + 0x98);
  local_res8[0] = *(undefined4 *)(param_1 + 0xb0);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xb4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xb8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xbc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc0);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined4 *)(param_1 + 0xe0);
  lVar3 = 0x33;
  do {
    local_res8[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_1400020a0(param_2,param_1 + 0x1b0);
  FUN_1400020a0(param_2,param_1 + 0x1c8);
  FUN_1400020a0(param_2,param_1 + 0x1e0);
  FUN_1400020a0(param_2,param_1 + 0x1f8);
  FUN_1400020a0(param_2,param_1 + 0x210);
  FUN_1400020a0(param_2,param_1 + 0x228);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x240);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x241);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0]._0_1_ = *(undefined1 *)(param_1 + 0x242);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x243));
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = *(undefined4 *)(param_1 + 0x244);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3 != 0) {
    lVar3 = 0;
    do {
      FUN_140b0cc80(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 200)),param_2);
      lVar3 = lVar3 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3));
  }
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x24a));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_1_ = *(char *)(param_1 + 0x248) != '\0';
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(char *)(param_1 + 0x249) != '\0');
  FUN_1405bb7c0(param_2,local_res8,1);
  FUN_1400021b0(param_2,param_1 + 0x250);
  return;
}

