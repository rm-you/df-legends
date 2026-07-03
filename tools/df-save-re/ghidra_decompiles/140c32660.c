// FUN_140c32660 @ 140c32660
// callees:
//   -> 14000d840 FUN_14000d840


void FUN_140c32660(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  
  bVar3 = false;
  iVar7 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
  *param_2 = 7;
  lVar6 = (longlong)iVar7;
  *param_3 = 0;
  if (-1 < iVar7) {
    do {
      puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar6 * 8);
      if ((*(short *)(puVar8 + 1) == 2) || (*(short *)(puVar8 + 1) == 5)) {
        sVar5 = *(short *)((longlong)puVar8 + 10);
        if (-1 < sVar5) {
          lVar1 = **(longlong **)(param_1 + 0x5d8);
          if ((((ulonglong)(longlong)sVar5 <
                (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar1 >> 3)) &&
              (cVar4 = FUN_14000d840(*(longlong *)(lVar1 + (longlong)sVar5 * 8) + 0x48,1),
              cVar4 != '\0')) && (sVar5 = (*(code *)**(undefined8 **)*puVar8)(), sVar5 == 0x19)) {
            plVar2 = (longlong *)
                     **(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + (longlong)iVar7 * 8);
            (**(code **)(*plVar2 + 0x388))(plVar2,0);
            *param_2 = DAT_141271228;
            *param_3 = DAT_14127122a;
            return;
          }
        }
        puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar6 * 8);
        sVar5 = *(short *)((longlong)puVar8 + 10);
        if (-1 < sVar5) {
          lVar1 = **(longlong **)(param_1 + 0x5d8);
          if ((((ulonglong)(longlong)sVar5 <
                (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar1 >> 3)) &&
              (cVar4 = FUN_14000d840(*(longlong *)(lVar1 + (longlong)sVar5 * 8) + 0x48,2),
              cVar4 != '\0')) &&
             ((!bVar3 && (sVar5 = (*(code *)**(undefined8 **)*puVar8)(), sVar5 == 0x3b)))) {
            plVar2 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar6 * 8);
            (**(code **)(*plVar2 + 0x388))(plVar2,0);
            bVar3 = true;
            *param_2 = DAT_141271228;
            *param_3 = DAT_14127122a;
          }
        }
      }
      iVar7 = iVar7 + -1;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}

