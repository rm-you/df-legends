// FUN_140c241b0 @ 140c241b0
// callees:


ulonglong FUN_140c241b0(int *param_1)

{
  longlong lVar1;
  int *in_RAX;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  if ((((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
       (((param_1[3] == 0 && (param_1[4] == 0)) &&
        (((char)param_1[5] == '\0' &&
         (((char)param_1[0x1e] == '\0' && ((char)param_1[0x1f] == '\0')))))))) &&
      (param_1[0x20] == 0)) &&
     (((param_1[0x21] == 0 && (param_1[0x22] == 0)) && (param_1[0x23] == 100)))) {
    lVar1 = *(longlong *)(param_1 + 0x24);
    piVar3 = (int *)0x0;
    in_RAX = piVar3;
    if (lVar1 != 0) {
      do {
        if ((*(int *)(lVar1 + (longlong)in_RAX * 4) != 100) ||
           (*(int *)(lVar1 + 0x18 + (longlong)in_RAX * 4) != 0)) goto LAB_140c24326;
        in_RAX = (int *)((longlong)in_RAX + 1);
      } while ((longlong)in_RAX < 6);
      in_RAX = (int *)(lVar1 + 100);
      piVar4 = piVar3;
      do {
        if ((in_RAX[-0xd] != 100) || (*in_RAX != 0)) goto LAB_140c24326;
        piVar4 = (int *)((longlong)piVar4 + 1);
        in_RAX = in_RAX + 1;
      } while ((longlong)piVar4 < 0xd);
    }
    in_RAX = *(int **)(param_1 + 0x26);
    if (in_RAX != (int *)0x0) {
      do {
        if ((short)*in_RAX != 0) goto LAB_140c24326;
        uVar2 = (int)piVar3 + 1;
        piVar3 = (int *)(ulonglong)uVar2;
        in_RAX = (int *)((longlong)in_RAX + 2);
      } while ((int)uVar2 < 0x32);
    }
    if ((param_1[0x28] == 100) && (param_1[0x29] == 0)) {
      in_RAX = *(int **)(param_1 + 0x30);
      if (in_RAX < *(int **)(param_1 + 0x32)) {
        do {
          if (*in_RAX == param_1[0x36]) goto LAB_140c24326;
          in_RAX = in_RAX + 1;
        } while (in_RAX < *(int **)(param_1 + 0x32));
      }
      if (((param_1[0x38] == -1) &&
          (in_RAX = (int *)(*(longlong *)(param_1 + 0x3c) - *(longlong *)(param_1 + 0x3a)),
          ((ulonglong)in_RAX & 0xfffffffffffffffc) == 0)) &&
         (in_RAX = (int *)(*(longlong *)(param_1 + 0x42) - *(longlong *)(param_1 + 0x40)),
         ((ulonglong)in_RAX & 0xfffffffffffffffc) == 0)) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
LAB_140c24326:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

