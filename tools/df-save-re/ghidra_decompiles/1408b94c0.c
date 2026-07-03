// FUN_1408b94c0 @ 1408b94c0
// callees:
//   -> 1408bba00 FUN_1408bba00
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390
//   -> 1408b9be0 FUN_1408b9be0
//   -> 1408dc530 FUN_1408dc530
//   -> 1402b6600 FUN_1402b6600


void FUN_1408b94c0(longlong param_1)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 local_res8 [2];
  ulonglong uVar7;
  
  FUN_1408bba00();
  puVar5 = (undefined8 *)(param_1 + 0x758);
  lVar12 = 0x27;
  do {
    puVar5[-0xea] = puVar5[-0xeb];
    puVar5[-0x75] = puVar5[-0x76];
    *puVar5 = puVar5[-1];
    puVar5 = puVar5 + 3;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  puVar1 = (ulonglong *)(param_1 + 0x180);
  puVar2 = *(undefined4 **)(param_1 + 0x188);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,0xb);
  if ((local_res8 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_res8)) {
    if (puVar2 == *(undefined4 **)(param_1 + 400)) {
      FUN_14000c460(puVar1,1);
    }
    if (*(undefined2 **)(param_1 + 0x188) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x188) =
           *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)puVar3 >> 1) * 2);
    }
  }
  else {
    if (puVar2 == *(undefined4 **)(param_1 + 400)) {
      FUN_14000c460(puVar1,1);
    }
    if (*(undefined2 **)(param_1 + 0x188) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x188) = 0xb;
    }
  }
  *(longlong *)(param_1 + 0x188) = *(longlong *)(param_1 + 0x188) + 2;
  puVar1 = (ulonglong *)(param_1 + 0x528);
  local_res8[0] = 0xffffffff;
  puVar2 = *(undefined4 **)(param_1 + 0x530);
  if ((local_res8 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_res8)) {
    if (puVar2 == *(undefined4 **)(param_1 + 0x538)) {
      FUN_14000c390(puVar1,1);
    }
    if (*(undefined4 **)(param_1 + 0x530) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x530) =
           *(undefined4 *)(*puVar1 + ((longlong)local_res8 - (longlong)puVar3 >> 2) * 4);
    }
  }
  else {
    if (puVar2 == *(undefined4 **)(param_1 + 0x538)) {
      FUN_14000c390(puVar1,1);
    }
    if (*(undefined4 **)(param_1 + 0x530) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x530) = 0xffffffff;
    }
  }
  *(longlong *)(param_1 + 0x530) = *(longlong *)(param_1 + 0x530) + 4;
  uVar14 = 0;
  puVar1 = (ulonglong *)(param_1 + 0x8d0);
  puVar2 = *(undefined4 **)(param_1 + 0x8d8);
  local_res8[0] = 0;
  if ((local_res8 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_res8)) {
    if (puVar2 == *(undefined4 **)(param_1 + 0x8e0)) {
      FUN_14000c390(puVar1,1);
    }
    if (*(undefined4 **)(param_1 + 0x8d8) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x8d8) =
           *(undefined4 *)(*puVar1 + ((longlong)local_res8 - (longlong)puVar3 >> 2) * 4);
    }
  }
  else {
    if (puVar2 == *(undefined4 **)(param_1 + 0x8e0)) {
      FUN_14000c390(puVar1,1);
    }
    if (*(undefined4 **)(param_1 + 0x8d8) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x8d8) = 0;
    }
  }
  *(longlong *)(param_1 + 0x8d8) = *(longlong *)(param_1 + 0x8d8) + 4;
  *(undefined8 *)(param_1 + 0x1f98) = *(undefined8 *)(param_1 + 0x1f90);
  *(undefined8 *)(param_1 + 0x1fb0) = *(undefined8 *)(param_1 + 0x1fa8);
  *(undefined8 *)(param_1 + 0x1fc8) = *(undefined8 *)(param_1 + 0x1fc0);
  *(undefined8 *)(param_1 + 0x1fe0) = *(undefined8 *)(param_1 + 0x1fd8);
  *(undefined8 *)(param_1 + 0x1ff8) = *(undefined8 *)(param_1 + 0x1ff0);
  *(undefined8 *)(param_1 + 0x2010) = *(undefined8 *)(param_1 + 0x2008);
  *(undefined8 *)(param_1 + 0x2028) = *(undefined8 *)(param_1 + 0x2020);
  *(undefined8 *)(param_1 + 0x2040) = *(undefined8 *)(param_1 + 0x2038);
  iVar8 = (int)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3);
  uVar7 = uVar14;
  uVar10 = uVar14;
  if (0 < iVar8) {
    do {
      if ((ulonglong)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3) <= (ulonglong)(longlong)(int)uVar7) break;
      FUN_1408b9be0(*(longlong *)(uVar10 + DAT_141d6dbe0) + 0x1a8,0,uVar7);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 8;
    } while ((int)uVar6 < iVar8);
  }
  iVar8 = (int)(DAT_141d6dc18 - DAT_141d6dc10 >> 3);
  uVar7 = uVar14;
  uVar10 = uVar14;
  if (0 < iVar8) {
    do {
      if ((ulonglong)(DAT_141d6dc18 - DAT_141d6dc10 >> 3) <= (ulonglong)(longlong)(int)uVar7) break;
      FUN_1408dc530(*(undefined8 *)(uVar10 + DAT_141d6dc10));
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 8;
    } while ((int)uVar6 < iVar8);
  }
  iVar8 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3);
  uVar7 = uVar14;
  uVar10 = uVar14;
  if (0 < iVar8) {
    do {
      if ((ulonglong)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) <= (ulonglong)(longlong)(int)uVar7) break;
      (**(code **)(**(longlong **)(uVar10 + DAT_141d6ddb8) + 0x20))();
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 8;
    } while ((int)uVar6 < iVar8);
  }
  FUN_1402b6600(&DAT_141d6dd30,0,DAT_141d6dd58 - DAT_141d6dd50 >> 3);
  iVar8 = (int)(DAT_141d779c8 - DAT_141d779c0 >> 3);
  lVar12 = DAT_141d779c0;
  uVar7 = uVar14;
  lVar13 = DAT_141d779c8;
  uVar10 = uVar14;
  if (0 < iVar8) {
    do {
      if ((ulonglong)(lVar13 - lVar12 >> 3) <= (ulonglong)(longlong)(int)uVar7) {
        return;
      }
      puVar5 = *(undefined8 **)(*(longlong *)(lVar12 + uVar10) + 0x80);
      puVar4 = *(undefined8 **)(*(longlong *)(lVar12 + uVar10) + 0x88);
      uVar9 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar5)) >> 3;
      if (puVar4 < puVar5) {
        uVar9 = uVar14;
      }
      uVar11 = uVar14;
      if (uVar9 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar5 + 0x40))();
          uVar11 = uVar11 + 1;
          puVar5 = puVar5 + 1;
          lVar12 = DAT_141d779c0;
          lVar13 = DAT_141d779c8;
        } while (uVar11 < uVar9);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 8;
    } while ((int)uVar6 < iVar8);
  }
  return;
}

