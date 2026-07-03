// FUN_1407c6dd0 @ 1407c6dd0
// callees:
//   -> 140019a10 FUN_140019a10


longlong FUN_1407c6dd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x130);
  if ((((lVar6 != 0) && (*(longlong *)(lVar6 + 0x28) != 0)) && (*(longlong *)(lVar6 + 8) != 0)) &&
     ((((iVar5 = (int)*(short *)(*(longlong *)(lVar6 + 8) + 0x60), iVar5 == 0x3b || (iVar5 == 0x45))
       || (iVar5 - 0x74U < 9)) &&
      ((*(int *)(*(longlong *)(lVar6 + 0x28) + 4) != -1 &&
       (lVar6 = FUN_140019a10(DAT_141d6cfd0), lVar6 != 0)))))) {
    plVar1 = *(longlong **)(lVar6 + 0x2b8);
    for (plVar7 = *(longlong **)(lVar6 + 0x2b0); plVar7 < plVar1; plVar7 = plVar7 + 1) {
      puVar2 = (undefined8 *)*plVar7;
      if (((*(int *)(puVar2 + 6) < 1) ||
          ((pbVar3 = (byte *)puVar2[5], (*pbVar3 & 2) == 0 &&
           ((*(int *)(puVar2 + 6) < 1 ||
            (((*pbVar3 & 1) == 0 && ((*(int *)(puVar2 + 6) < 1 || ((*pbVar3 & 8) == 0)))))))))) &&
         (sVar4 = (**(code **)*puVar2)(), sVar4 == 9)) {
        return *plVar7;
      }
    }
  }
  return 0;
}

