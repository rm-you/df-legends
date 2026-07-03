// FUN_140c81440 @ 140c81440
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 14028f2b0 FUN_14028f2b0


undefined2 FUN_140c81440(longlong param_1,longlong *param_2,short param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  longlong *plVar6;
  char local_res10 [8];
  short local_res20 [4];
  short local_28 [8];
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  sVar4 = (**(code **)*puVar1)(puVar1);
  if (sVar4 == 0x19) {
    if (((short)param_2[1] != 2) && ((short)param_2[1] != 5)) {
      return 0;
    }
    plVar6 = *(longlong **)(param_1 + 0x5d8);
    if (-1 < param_3) {
      if (((ulonglong)(longlong)param_3 < (ulonglong)(plVar6[1] - *plVar6 >> 3)) &&
         (cVar3 = FUN_14000d840(*(longlong *)(*plVar6 + (longlong)param_3 * 8) + 0x48,0),
         cVar3 != '\0')) {
        return 0;
      }
      if (-1 < param_3) {
        if (((ulonglong)(longlong)param_3 < (ulonglong)(plVar6[1] - *plVar6 >> 3)) &&
           (cVar3 = FUN_14000d840(*(longlong *)(*plVar6 + (longlong)param_3 * 8) + 0x48,9),
           cVar3 != '\0')) {
          return 0;
        }
        if (-1 < param_3) {
          if (((ulonglong)(longlong)param_3 < (ulonglong)(plVar6[1] - *plVar6 >> 3)) &&
             (cVar3 = FUN_14000d840(*(longlong *)(*plVar6 + (longlong)param_3 * 8) + 0x48,10),
             cVar3 != '\0')) {
            return 0;
          }
        }
      }
    }
    lVar2 = puVar1[0x1c];
    FUN_14028f2b0(plVar6,*(undefined2 *)((longlong)param_2 + 10),param_3,local_res10,local_res20,
                  local_28);
    if ((local_res10[0] == '\0') &&
       ((*(short *)(lVar2 + 0x106) < local_res20[0] || (local_res20[0] == -1)))) {
      if (*(short *)(lVar2 + 0x108) < local_28[0]) {
        return 0;
      }
      if (local_28[0] == -1) {
        return 0;
      }
    }
    return *(undefined2 *)(lVar2 + 0x128);
  }
  if (sVar4 == 0x1a) {
    if (((short)param_2[1] != 2) && ((short)param_2[1] != 5)) {
      return 0;
    }
    sVar4 = *(short *)((longlong)param_2 + 10);
    if (sVar4 != param_3) {
      if (sVar4 != -1) {
        sVar4 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)sVar4 * 8) +
                          0x40);
        sVar5 = 1;
        while (((sVar4 != -1 &&
                (lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)sVar4 * 8),
                1 < *(int *)(lVar2 + 0x50))) &&
               ((*(byte *)(*(longlong *)(lVar2 + 0x48) + 1) & 1) != 0))) {
          if (sVar4 == param_3) goto LAB_140c8163f;
          sVar4 = *(short *)(lVar2 + 0x40);
          sVar5 = sVar5 + 1;
        }
      }
LAB_140c8163c:
      sVar5 = 0;
LAB_140c8163f:
      if (sVar5 < 1) {
        return 0;
      }
      if (*(short *)(puVar1[0x1c] + 0xc6) < sVar5) {
        return 0;
      }
      return *(undefined2 *)(puVar1[0x1c] + 0xf8);
    }
  }
  else if (sVar4 == 0x1c) {
    if (((short)param_2[1] != 2) && ((short)param_2[1] != 5)) {
      return 0;
    }
    if (*(short *)((longlong)param_2 + 10) != param_3) {
      return 0;
    }
  }
  else {
    if (sVar4 != 0x1d) {
      if (sVar4 != 0x3b) {
        return 0;
      }
      if (((short)param_2[1] != 2) && ((short)param_2[1] != 5)) {
        return 0;
      }
      plVar6 = *(longlong **)(param_1 + 0x5d8);
      if (-1 < param_3) {
        if (((ulonglong)(longlong)param_3 < (ulonglong)(plVar6[1] - *plVar6 >> 3)) &&
           (cVar3 = FUN_14000d840(*(longlong *)(*plVar6 + (longlong)param_3 * 8) + 0x48,0),
           cVar3 != '\0')) {
          return 0;
        }
        if (-1 < param_3) {
          if (((ulonglong)(longlong)param_3 < (ulonglong)(plVar6[1] - *plVar6 >> 3)) &&
             (cVar3 = FUN_14000d840(*(longlong *)(*plVar6 + (longlong)param_3 * 8) + 0x48,9),
             cVar3 != '\0')) {
            return 0;
          }
          if (-1 < param_3) {
            if (((ulonglong)(longlong)param_3 < (ulonglong)(plVar6[1] - *plVar6 >> 3)) &&
               (cVar3 = FUN_14000d840(*(longlong *)(*plVar6 + (longlong)param_3 * 8) + 0x48,10),
               cVar3 != '\0')) {
              return 0;
            }
          }
        }
      }
      FUN_14028f2b0(plVar6,*(undefined2 *)((longlong)param_2 + 10),param_3,local_res10,local_28,
                    local_res20);
      if (local_res10[0] == '\0') {
        if (*(short *)(puVar1[0x1c] + 0x11c) < local_res20[0]) {
          return 0;
        }
        if (local_res20[0] == -1) {
          return 0;
        }
      }
      return *(undefined2 *)(puVar1[0x1c] + 0x138);
    }
    if (((short)param_2[1] != 2) && ((short)param_2[1] != 5)) {
      return 0;
    }
    sVar4 = *(short *)((longlong)param_2 + 10);
    if (sVar4 != param_3) {
      if (sVar4 != -1) {
        sVar4 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)sVar4 * 8) +
                          0x40);
        sVar5 = 1;
        while (((sVar4 != -1 &&
                (lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)sVar4 * 8),
                1 < *(int *)(lVar2 + 0x50))) &&
               ((*(byte *)(*(longlong *)(lVar2 + 0x48) + 1) & 1) != 0))) {
          if (sVar4 == param_3) goto LAB_140c8163f;
          sVar4 = *(short *)(lVar2 + 0x40);
          sVar5 = sVar5 + 1;
        }
      }
      goto LAB_140c8163c;
    }
  }
  return *(undefined2 *)(puVar1[0x1c] + 0xf8);
}

