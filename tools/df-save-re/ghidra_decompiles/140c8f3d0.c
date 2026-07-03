// FUN_140c8f3d0 @ 140c8f3d0
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140c5f840 FUN_140c5f840
//   -> 1406a6120 FUN_1406a6120


void FUN_140c8f3d0(longlong param_1,short param_2,undefined4 param_3,undefined2 param_4,
                  undefined2 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar7 = 0;
  uVar10 = uVar7;
  if (*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2 != 0) {
    do {
      lVar11 = uVar7 * 4;
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x4d0) + lVar11);
      if (((uVar8 & 0x80002) == 0) &&
         (*(uint *)(*(longlong *)(param_1 + 0x4d0) + lVar11) = uVar8 & 0xfffffffe, param_2 != -1)) {
        sVar5 = (short)uVar10;
        if (-1 < sVar5) {
          lVar1 = **(longlong **)(param_1 + 0x5d8);
          if ((((ulonglong)(longlong)sVar5 <
                (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar1 >> 3)) &&
              (cVar4 = FUN_14000d840(*(longlong *)(lVar1 + (longlong)sVar5 * 8) + 0x48,5),
              cVar4 != '\0')) && ((*(uint *)(lVar11 + *(longlong *)(param_1 + 0x4d0)) & 0x800) == 0)
             ) goto LAB_140c8f4c7;
        }
        FUN_140c5f840(param_1,param_2,param_3,param_4,param_5,1000,sVar5,1,0xffffffff);
      }
LAB_140c8f4c7:
      uVar8 = (int)uVar10 + 1;
      uVar7 = (ulonglong)(int)uVar8;
      uVar10 = (ulonglong)uVar8;
    } while (uVar7 < (ulonglong)
                     (*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2));
  }
  iVar9 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3);
  do {
    while( true ) {
      while( true ) {
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) {
          return;
        }
        if ((ulonglong)(longlong)iVar9 <
            (ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3))
        break;
        iVar9 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3);
      }
      lVar11 = (longlong)iVar9 * 8;
      puVar2 = (undefined8 *)**(longlong **)(lVar11 + *(longlong *)(param_1 + 0x3f8));
      sVar5 = (**(code **)*puVar2)(puVar2);
      iVar6 = (int)sVar5;
      if (iVar6 == 0x38) break;
      if ((iVar6 - 0x44U & 0xfffffffa) == 0) {
        bVar12 = iVar6 == 0x49;
        goto LAB_140c8f57d;
      }
LAB_140c8f5ab:
      plVar3 = (longlong *)**(undefined8 **)(lVar11 + *(longlong *)(param_1 + 0x3f8));
      (**(code **)(*plVar3 + 0x5d0))(plVar3,param_2,param_3,param_4,param_5);
    }
    bVar12 = (*(uint *)(puVar2 + 2) & 0x200) == 0;
LAB_140c8f57d:
    if (bVar12) goto LAB_140c8f5ab;
    FUN_1406a6120(**(undefined8 **)(lVar11 + *(longlong *)(param_1 + 0x3f8)),1,0xffff8ad0,0xffff8ad0
                  ,0x8ad0,1);
  } while( true );
}

