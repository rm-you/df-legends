// FUN_140ce7da0 @ 140ce7da0
// callees:
//   -> 140051f80 FUN_140051f80
//   -> 140ce7570 FUN_140ce7570
//   -> 140106e20 FUN_140106e20
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0


undefined8 FUN_140ce7da0(ulonglong *param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void **ppvVar3;
  void **ppvVar4;
  char cVar5;
  void *pvVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong lVar9;
  void *local_res10;
  
  if (*(int *)(param_2 + 0x24) == -1) {
    return 2;
  }
  plVar8 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  lVar9 = 0;
  if (plVar8 < plVar1) {
    do {
      lVar2 = *plVar8;
      cVar5 = FUN_140051f80(lVar2,param_2);
      if (((cVar5 != '\0') && (*(int *)(lVar2 + 0x18) == *(int *)(param_2 + 0x18))) &&
         (*(int *)(lVar2 + 0x1c) == *(int *)(param_2 + 0x1c))) {
        if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
          if (param_3 < *(int *)(lVar2 + 0x10)) {
            *(int *)(lVar2 + 0x10) = param_3;
            *(int *)(lVar2 + 0x14) = param_4;
            return 1;
          }
          if ((*(int *)(lVar2 + 0x10) == param_3) && (param_4 < *(int *)(lVar2 + 0x14))) {
            *(int *)(lVar2 + 0x14) = param_4;
            return 1;
          }
        }
        return 2;
      }
      cVar5 = FUN_140ce7570(lVar2);
      if (cVar5 == '\0') {
        cVar5 = FUN_140ce7570(param_2,lVar2);
        if (cVar5 != '\0') {
          return 2;
        }
        if ((*(byte *)(lVar2 + 0x20) & 1) != 0) {
          lVar9 = lVar2;
        }
      }
      else {
        *(uint *)(lVar2 + 0x20) = *(uint *)(lVar2 + 0x20) | 1;
        lVar9 = lVar2;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 < plVar1);
    if (lVar9 != 0) {
      FUN_140106e20(lVar9,param_2);
      *(int *)(lVar9 + 0x10) = param_3;
      *(int *)(lVar9 + 0x14) = param_4;
      return 0;
    }
  }
  pvVar6 = operator_new(0x28);
  pvVar7 = pvVar6;
  local_res10 = pvVar6;
  FUN_140106e20(pvVar6,param_2);
  *(int *)((longlong)pvVar7 + 0x10) = param_3;
  *(int *)((longlong)pvVar7 + 0x14) = param_4;
  ppvVar3 = (void **)param_1[1];
  if ((&local_res10 < ppvVar3) && (ppvVar4 = (void **)*param_1, ppvVar4 <= &local_res10)) {
    if (ppvVar3 == (void **)param_1[2]) {
      FUN_14000c2d0(param_1,1);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] =
           *(undefined8 *)(*param_1 + ((longlong)&local_res10 - (longlong)ppvVar4 >> 3) * 8);
    }
  }
  else {
    if (ppvVar3 == (void **)param_1[2]) {
      FUN_14000c2d0(param_1,1);
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] = pvVar6;
    }
  }
  param_1[1] = param_1[1] + 8;
  return 0;
}

