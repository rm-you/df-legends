// FUN_1407099a0 @ 1407099a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000ccf0 FUN_14000ccf0
//   -> 14070b7a0 FUN_14070b7a0
//   -> 1407c8470 FUN_1407c8470
//   -> 140dfb5c4 operator_new
//   -> 140708460 FUN_140708460
//   -> 14070a9d0 FUN_14070a9d0
//   -> 1400715b0 FUN_1400715b0
//   -> 140763aa0 FUN_140763aa0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 1406ff0e0 FUN_1406ff0e0
//   -> 14075cd70 FUN_14075cd70
//   -> 14000bd10 FUN_14000bd10
//   -> 14000bed0 FUN_14000bed0
//   -> 1406fedd0 FUN_1406fedd0
//   -> 1406fefc0 FUN_1406fefc0


void FUN_1407099a0(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int local_res20 [2];
  undefined4 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1405bba90(param_2,local_res20,4);
  uVar9 = (ulonglong)local_res20[0];
  if ((ulonglong)(param_1[2] - *param_1 >> 3) < uVar9) {
    if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_14000ccf0(param_1,uVar9);
  }
  for (; 0 < local_res20[0]; local_res20[0] = local_res20[0] + -1) {
    plVar5 = (longlong *)FUN_14070b7a0(param_2);
    (**(code **)(*plVar5 + 0x120))(plVar5,param_2,param_3);
    FUN_1407c8470(plVar5,param_1);
    (**(code **)(*plVar5 + 0x100))(plVar5);
  }
  FUN_1405bba90(param_2,local_res20,4);
  uVar9 = (ulonglong)local_res20[0];
  if ((ulonglong)(param_1[0xe] - param_1[0xc] >> 3) < uVar9) {
    if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    FUN_14000ccf0(param_1 + 0xc,uVar9);
  }
  for (; 0 < local_res20[0]; local_res20[0] = local_res20[0] + -1) {
    local_48 = operator_new(0x178);
    lVar6 = FUN_140708460(local_48,1);
    FUN_14070a9d0(lVar6,param_2,param_3);
    if (lVar6 != 0) {
      FUN_1400715b0(lVar6,param_1 + 0xc);
    }
  }
  FUN_1405bba90(param_2,local_res20,4);
  for (; 0 < local_res20[0]; local_res20[0] = local_res20[0] + -1) {
    plVar5 = (longlong *)FUN_140763aa0(param_2);
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,param_3);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  FUN_1405bba90(param_2,local_res20,4);
  plVar5 = param_1 + 0x48;
  FUN_14000b9d0(plVar5,(longlong)local_res20[0]);
  uVar9 = 0;
  uVar10 = uVar9;
  if (param_1[0x49] - *plVar5 >> 3 != 0) {
    do {
      puVar7 = operator_new(0x78);
      local_48 = puVar7;
      FUN_1406ff0e0(puVar7 + 2);
      *(undefined8 *)(puVar7 + 0x16) = 0;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      *(undefined8 *)(puVar7 + 0x1a) = 0;
      *(undefined8 *)(puVar7 + 0x10) = 0;
      puVar7[0x12] = 0;
      *(undefined8 *)(puVar7 + 0x13) = 0xffffffffffffffff;
      puVar7[0x15] = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x1c) = 0;
      *puVar7 = 0xffffffff;
      *(undefined4 **)(uVar9 + *plVar5) = puVar7;
      FUN_14075cd70(*(undefined8 *)(*plVar5 + uVar9),param_2);
      uVar12 = (int)uVar10 + 1;
      uVar9 = uVar9 + 8;
      uVar10 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(param_1[0x49] - *plVar5 >> 3));
  }
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bd10(param_1 + 0x4b,(longlong)(int)local_48);
  uVar9 = param_1[0x4c];
  for (uVar10 = param_1[0x4b]; uVar10 < uVar9; uVar10 = uVar10 + 4) {
    FUN_1405bba90(param_2,uVar10,4);
  }
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bed0(param_1 + 0x4e,(longlong)(int)local_48);
  uVar9 = param_1[0x4f];
  for (uVar10 = param_1[0x4e]; uVar10 < uVar9; uVar10 = uVar10 + 2) {
    FUN_1405bba90(param_2,uVar10,2);
  }
  FUN_1405bba90(param_2,param_1 + 0x51,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x28c,4);
  FUN_1405bba90(param_2,param_1 + 0x52,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x294,4);
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bd10(param_1 + 0x53,(longlong)(int)local_48);
  uVar9 = param_1[0x54];
  for (uVar10 = param_1[0x53]; uVar10 < uVar9; uVar10 = uVar10 + 4) {
    FUN_1405bba90(param_2,uVar10,4);
  }
  if (param_3 < 0x5d8) {
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x56,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x2b4,4);
    FUN_1405bba90(param_2,param_1 + 0x57,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 700,4);
    FUN_1405bba90(param_2,param_1 + 0x58,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x2c4,4);
    FUN_1405bba90(param_2,param_1 + 0x59,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x2cc,4);
    FUN_1405bba90(param_2,param_1 + 0x5a,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x2d4,4);
    FUN_1405bba90(param_2,param_1 + 0x5b,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x2dc,4);
    FUN_1405bba90(param_2,param_1 + 0x5c,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x2e4,4);
  }
  if (0x65c < param_3) {
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(param_1 + 9,(longlong)local_res20[0]);
    puVar4 = (undefined8 *)param_1[10];
    for (puVar11 = (undefined8 *)param_1[9]; puVar11 < puVar4; puVar11 = puVar11 + 1) {
      local_48 = operator_new(0x14);
      puVar7 = local_48 + 1;
      *puVar7 = 0xffffffff;
      puVar1 = local_48 + 2;
      *puVar1 = 0xffffffff;
      puVar2 = local_48 + 3;
      *puVar2 = 0xffffffff;
      puVar3 = local_48 + 4;
      *puVar3 = 0xffffffff;
      *puVar11 = local_48;
      FUN_1405bba90(param_2,local_48,4);
      FUN_1405bba90(param_2,puVar7,4);
      FUN_1405bba90(param_2,puVar1,4);
      FUN_1405bba90(param_2,puVar2,4);
      FUN_1405bba90(param_2,puVar3,4);
    }
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(param_1 + 6,(longlong)local_res20[0]);
    puVar4 = (undefined8 *)param_1[7];
    for (puVar11 = (undefined8 *)param_1[6]; puVar11 < puVar4; puVar11 = puVar11 + 1) {
      pvVar8 = operator_new(0x4808);
      *(undefined4 *)((longlong)pvVar8 + 0x4800) = 0;
      *(undefined4 *)((longlong)pvVar8 + 0x4804) = 0xffffffff;
      *puVar11 = pvVar8;
      FUN_1406fedd0(pvVar8,param_2);
    }
  }
  if (0x68f < param_3) {
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(param_1 + 0x5d,(longlong)local_res20[0]);
    puVar4 = (undefined8 *)param_1[0x5e];
    for (puVar11 = (undefined8 *)param_1[0x5d]; puVar11 < puVar4; puVar11 = puVar11 + 1) {
      pvVar8 = operator_new(0x20);
      *(undefined8 *)((longlong)pvVar8 + 8) = 0;
      *(undefined8 *)((longlong)pvVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)pvVar8 + 0x18) = 0xffffffffffffffff;
      *puVar11 = pvVar8;
      FUN_1406fefc0(pvVar8,param_2,param_3);
    }
  }
  return;
}

