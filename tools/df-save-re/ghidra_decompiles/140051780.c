// FUN_140051780 @ 140051780
// callees:


longlong FUN_140051780(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  while( true ) {
    if ((longlong *)param_2[1] <= plVar1) {
      return 0xffffffff;
    }
    if (*plVar1 == param_1) break;
    plVar1 = plVar1 + 1;
  }
  return (longlong)plVar1 - *param_2 >> 3;
}

