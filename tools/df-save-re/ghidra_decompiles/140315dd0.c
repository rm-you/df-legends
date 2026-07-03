// FUN_140315dd0 @ 140315dd0
// callees:
//   -> 140315cd0 FUN_140315cd0
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140223440 FUN_140223440
//   -> 140830840 FUN_140830840


void FUN_140315dd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *local_res8;
  int local_res20 [2];
  
  FUN_140315cd0();
  FUN_1405bba90(param_2,param_1 + 0x78,4);
  FUN_1405bba90(param_2,&local_res8,1);
  if ((char)local_res8 == '\0') {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    puVar2 = operator_new(0x18);
    uVar3 = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(*(undefined8 *)(param_1 + 0x90),(longlong)local_res20[0]);
    uVar4 = uVar3;
    if ((*(longlong **)(param_1 + 0x90))[1] - **(longlong **)(param_1 + 0x90) >> 3 != 0) {
      do {
        local_res8 = operator_new(0x1c);
        *(undefined4 *)((longlong)local_res8 + 10) = 0x2742;
        *(undefined2 *)local_res8 = 0xffff;
        *(undefined4 *)((longlong)local_res8 + 4) = 0xffffffff;
        *(undefined4 *)(local_res8 + 2) = 0;
        *(undefined2 *)((longlong)local_res8 + 0x14) = 0;
        *(undefined2 *)(local_res8 + 3) = 0xffff;
        *(undefined2 *)((longlong)local_res8 + 0x1a) = 0;
        *(undefined8 **)(uVar3 + **(longlong **)(param_1 + 0x90)) = local_res8;
        lVar1 = *(longlong *)(uVar3 + **(longlong **)(param_1 + 0x90));
        FUN_140223440(lVar1,param_2,param_3);
        FUN_1405bba90(param_2,lVar1 + 0x18,2);
        FUN_1405bba90(param_2,lVar1 + 0x1a,2);
        uVar3 = uVar3 + 8;
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)
               ((*(longlong **)(param_1 + 0x90))[1] - **(longlong **)(param_1 + 0x90) >> 3));
    }
  }
  uVar3 = 0;
  FUN_1405bba90(param_2,&local_res8,1);
  if ((char)local_res8 == '\0') {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    puVar2 = operator_new(8);
    *puVar2 = 0;
    *(undefined8 **)(param_1 + 0x80) = puVar2;
    local_res8 = puVar2;
    FUN_1405bba90(param_2,&local_res8,1);
    if ((char)local_res8 == '\0') {
      *puVar2 = 0;
    }
    else {
      local_res8 = operator_new(0x10);
      *local_res8 = 0;
      local_res8[1] = 0;
      *puVar2 = local_res8;
      FUN_140830840(local_res8,param_2);
    }
  }
  FUN_1405bba90(param_2,&local_res8,1);
  if ((char)local_res8 == '\0') {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    puVar2 = operator_new(0x18);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(param_1 + 0x88) = puVar2;
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(*(undefined8 *)(param_1 + 0x88),(longlong)local_res20[0]);
    uVar4 = uVar3;
    if ((*(longlong **)(param_1 + 0x88))[1] - **(longlong **)(param_1 + 0x88) >> 3 != 0) {
      do {
        local_res8 = operator_new(0xc);
        *(undefined4 *)(local_res8 + 1) = 0;
        *(undefined8 **)(uVar3 + **(longlong **)(param_1 + 0x88)) = local_res8;
        FUN_1405bba90(param_2,*(undefined8 *)(**(longlong **)(param_1 + 0x88) + uVar3),2);
        FUN_1405bba90(param_2,*(longlong *)(**(longlong **)(param_1 + 0x88) + uVar3) + 2,2);
        FUN_1405bba90(param_2,*(longlong *)(**(longlong **)(param_1 + 0x88) + uVar3) + 4,2);
        FUN_1405bba90(param_2,*(longlong *)(**(longlong **)(param_1 + 0x88) + uVar3) + 8,4);
        uVar3 = uVar3 + 8;
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)
               ((*(longlong **)(param_1 + 0x88))[1] - **(longlong **)(param_1 + 0x88) >> 3));
    }
  }
  FUN_1405bba90(param_2,param_1 + 0x98,2);
  FUN_1405bba90(param_2,param_1 + 0x9a,2);
  FUN_1405bba90(param_2,param_1 + 0x9c,2);
  FUN_1405bba90(param_2,param_1 + 0xa0,4);
  FUN_1405bba90(param_2,param_1 + 0xa4,4);
  return;
}

