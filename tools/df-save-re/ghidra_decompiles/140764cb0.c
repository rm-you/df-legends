// FUN_140764cb0 @ 140764cb0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1401b7c10 FUN_1401b7c10
//   -> 140912b10 FUN_140912b10
//   -> 14000d840 FUN_14000d840
//   -> 140915940 FUN_140915940
//   -> 1407ba900 FUN_1407ba900


void FUN_140764cb0(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar5 = operator_new(0x68);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar5;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18) == 0) {
    pvVar6 = operator_new(400);
    FUN_1401b7c10(pvVar6);
    *(undefined2 *)((longlong)pvVar6 + 0x188) = 0xffff;
    *(void **)(*(longlong *)(param_1 + 0x130) + 0x18) = pvVar6;
    FUN_140912b10(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x18),
                  *(undefined2 *)(param_1 + 2),*(undefined2 *)(param_1 + 4));
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18) + 0xe4) =
         *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18) + 0xe8) = 0xffffffff;
    sVar1 = *(short *)(param_1 + 2);
    sVar2 = *(short *)(param_1 + 4);
    if (-1 < sVar1) {
      if (((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
         (-1 < sVar2)) {
        lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
        if ((ulonglong)(longlong)sVar2 <
            (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) {
          cVar4 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) +
                                0x6a8,0x3a);
          if (cVar4 != '\0') {
            FUN_140915940(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x18));
          }
        }
      }
    }
    if (DAT_1410b67dc != 3) {
      FUN_1407ba900(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x18));
      return;
    }
  }
  return;
}

