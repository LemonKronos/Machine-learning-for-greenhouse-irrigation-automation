
#include "header.h"

void predict_unit3(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)242.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)48.50000000000000711) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)69.85000000000000853) ) ) {
          result[0] += -0.0031366317635901013;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.850000000000000533) ) ) {
            result[0] += -2.9852859510140403e-05;
          } else {
            result[0] += -0.0028203633215514745;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.0021145932419717106;
        } else {
          result[0] += -0.0004707959980397859;
        }
      }
    } else {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.6330708189934523) ) ) {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)52.49999980000000477) ) ) {
          result[0] += -0.0021703907585917757;
        } else {
          if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-5.999999966499999005) ) ) {
            result[0] += 0.0030398173131314776;
          } else {
            result[0] += 0.009849097499623895;
          }
        }
      } else {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)771.4999995500000978) ) ) {
          result[0] += -0.0022662901641048775;
        } else {
          result[0] += 0.0025953654858416747;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0007745986761126135;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.35000000000000853) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
            result[0] += 0.009660033270573389;
          } else {
            result[0] += 0.004749177810418504;
          }
        } else {
          result[0] += 0.0031416608668708556;
        }
      } else {
        result[0] += 0.011836246602082006;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.86666666666667069) ) ) {
        result[0] += -0.0014053605743371497;
      } else {
        result[0] += 0.0024461200920632108;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.349992034500000493) ) ) {
          result[0] += -0.0035011070927915473;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.0008552622096106897;
          } else {
            result[0] += 0.004508952327208438;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.199999993500001416) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.950000017000000696) ) ) {
            result[0] += -0.0002613661319558178;
          } else {
            result[0] += 0.004434282494974988;
          }
        } else {
          result[0] += -0.002198394595044967;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.6500000000000199) ) ) {
      result[0] += -0.0001685112009290606;
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.35000000000000853) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.4500000000000011213) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.942498748500001149) ) ) {
            result[0] += 0.004439795358770492;
          } else {
            result[0] += 0.008528474727645518;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.45000000000001705) ) ) {
            result[0] += 0.015984524827450507;
          } else {
            result[0] += 0.006382932014636357;
          }
        }
      } else {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-78.00000003499998513) ) ) {
          result[0] += -0.0008268782892264425;
        } else {
          result[0] += 0.005177562319969928;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)726.0000000000001137) ) ) {
        result[0] += -0.0018567293415147831;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.35000000000000853) ) ) {
          result[0] += -0.001629322632436217;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.850000000000000533) ) ) {
            result[0] += 0.0007971714161739336;
          } else {
            result[0] += -0.003444668955967895;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.328215701000000415) ) ) {
          result[0] += -0.004002144629135728;
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.75000000000001421) ) ) {
            result[0] += -0.0006935561783722647;
          } else {
            result[0] += 0.003573342074050258;
          }
        }
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.650000000000001243) ) ) {
          result[0] += -0.0027173213273262945;
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)70.4000000000000199) ) ) {
            result[0] += -0.001956842350350185;
          } else {
            result[0] += 0.0022607566345188962;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.6500000000000199) ) ) {
      result[0] += -0.0001642984428132574;
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.167078499000001379) ) ) {
          result[0] += 0.003700491094591442;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)682.5000000000001137) ) ) {
            result[0] += 0.005857917817592548;
          } else {
            result[0] += 0.013371555178279157;
          }
        }
      } else {
        result[0] += 0.001486298269074824;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)242.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)39.99999983000000725) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.850000000000000533) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)19.65000000000000213) ) ) {
            result[0] += -0.003866691379562805;
          } else {
            result[0] += -1.7202967598214008e-05;
          }
        } else {
          result[0] += -0.0029329054358984454;
        }
      } else {
        result[0] += -0.0015856132784007595;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.35000000000000853) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6.799999996500001309) ) ) {
            result[0] += 0.0036131881970551706;
          } else {
            result[0] += 0.00032963988483073066;
          }
        } else {
          result[0] += -0.004209749883470627;
        }
      } else {
        result[0] += 0.008150460523637859;
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.6500000000000199) ) ) {
      result[0] += 0.000426786355780099;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17.44999997500000433) ) ) {
          result[0] += 0.007643139626830814;
        } else {
          result[0] += 0.016667824922129513;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)677.5000000000001137) ) ) {
            result[0] += 0.0047179925383534285;
          } else {
            result[0] += -0.00034627446199010593;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)770.5000000000001137) ) ) {
            result[0] += 0.012622092421166601;
          } else {
            result[0] += 0.00425728522669524;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.75000000000000355) ) ) {
        result[0] += -0.0013138976716527114;
      } else {
        result[0] += 0.0027555345706641674;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-19.0000001149999953) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)991.5000037750000956) ) ) {
            result[0] += -0.0017637131421724917;
          } else {
            result[0] += 0.00299887410298522;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.0011482491791248322;
          } else {
            result[0] += 0.005977563428343274;
          }
        }
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.650000000000001243) ) ) {
          result[0] += -0.002643155657375853;
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)70.4000000000000199) ) ) {
            result[0] += -0.001899565275419842;
          } else {
            result[0] += 0.002203806402762175;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)220.4999997500000291) ) ) {
      result[0] += 0;
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.5999999999999988676) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)22.85000000000000497) ) ) {
          result[0] += 0.008613462993875148;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.002922014629794932;
          } else {
            result[0] += 0.00784302788520498;
          }
        }
      } else {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.9500000000000011768) ) ) {
          result[0] += 0.014061111500719559;
        } else {
          result[0] += 0.006501922613475472;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)260.5000000000000568) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)862.5000000000001137) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.650000000000001243) ) ) {
        result[0] += -0.0035050660538289585;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)94.35000000000000853) ) ) {
          result[0] += -0.0014132445087176035;
        } else {
          result[0] += 0.003600038381603857;
        }
      }
    } else {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
        result[0] += -0.0009763258407374138;
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)900.8500000000000227) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)0.9999999495000001515) ) ) {
            result[0] += 0.0015873314758452278;
          } else {
            result[0] += 0.008848806418478489;
          }
        } else {
          result[0] += -0.004923559254543348;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)587.5000001000000793) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.499999983000001258) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)2.99999998300000037) ) ) {
            result[0] += 0.0020236861836465617;
          } else {
            result[0] += -0.0012113742787202703;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += 0.003962493047104491;
          } else {
            result[0] += -0.0002191395342916898;
          }
        }
      } else {
        result[0] += 0.0067456349101848905;
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.75000000000001421) ) ) {
        result[0] += 0.00013374555588234217;
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.25000000000001421) ) ) {
          result[0] += 0.0133869430633624;
        } else {
          result[0] += 0.004928045464446768;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)665.4999957500001528) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.0018657723256906263;
          } else {
            result[0] += 0.00044780664385429456;
          }
        } else {
          result[0] += 0.0021971933930539167;
        }
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)69.85000000000000853) ) ) {
          result[0] += -0.0030031617595148944;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)58.59999996000001232) ) ) {
            result[0] += 0.003043329390930012;
          } else {
            result[0] += -0.0004691493257544704;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.55000000000001137) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)650.5000000000001137) ) ) {
          result[0] += -0.0038348533672147565;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12.15000000500000077) ) ) {
            result[0] += 0.0010921854183577715;
          } else {
            result[0] += 0.006373588278268775;
          }
        }
      } else {
        result[0] += 0.008534243175759912;
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.199999993500001416) ) ) {
          result[0] += 0.0021986254627117878;
        } else {
          result[0] += 0.011904800413892821;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)553.5000000000001137) ) ) {
          result[0] += 0.007467784323031083;
        } else {
          result[0] += 0.0025351986651430316;
        }
      }
    } else {
      result[0] += 0.011320222039199012;
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.42500000000000426) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)458.0000000000000568) ) ) {
        result[0] += 0.0002757939621351841;
      } else {
        result[0] += -0.0017889269078217808;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)59.05000002500000988) ) ) {
          result[0] += 0.0011213631975727203;
        } else {
          result[0] += -0.0012990420248101568;
        }
      } else {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.5999999999999988676) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.1500000000000199) ) ) {
            result[0] += 0.00897819601676681;
          } else {
            result[0] += 0.0016790424236832948;
          }
        } else {
          result[0] += -0.0013973593392542431;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5.900000003500001533) ) ) {
      result[0] += -0.003355140654370189;
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.25000000000000355) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.75000000000000355) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.008621672381957372;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)751.000000100000193) ) ) {
            result[0] += -0.001650080328940281;
          } else {
            result[0] += 0.0026534092872911555;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.35000000000000853) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.662556502000001046) ) ) {
            result[0] += 0.004632859346553839;
          } else {
            result[0] += 0.011216645309558283;
          }
        } else {
          result[0] += 0.0024893293169637523;
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.42500000000000426) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-9.999999966499997228) ) ) {
        result[0] += -0.0019086862566836016;
      } else {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-6.99999989949999879) ) ) {
          result[0] += 0.0029625002282706123;
        } else {
          result[0] += -0.0016327789611419415;
        }
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)59.05000002500000988) ) ) {
          result[0] += 0.0010933290752701652;
        } else {
          result[0] += -0.001266565955607165;
        }
      } else {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-3.000000100499999878) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)40.85000000000000142) ) ) {
            result[0] += 0.0018712056031827595;
          } else {
            result[0] += -0.0011946109499290794;
          }
        } else {
          result[0] += 0.0061412035286947005;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5.900000003500001533) ) ) {
      result[0] += -0.003271262097172439;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)587.5000001000000793) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
          result[0] += 0.008270322402628759;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12.85000000000000142) ) ) {
            result[0] += 0.001545153109117149;
          } else {
            result[0] += 0.006082226992119104;
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.75000000000001421) ) ) {
          result[0] += 0;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.25000000000001421) ) ) {
            result[0] += 0.013848304665127004;
          } else {
            result[0] += 0.004782216508970841;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.55000000000000426) ) ) {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.7415863534913181843) ) ) {
          result[0] += -0.001328101844785082;
        } else {
          result[0] += -0.00449700576337901;
        }
      } else {
        result[0] += 0.0011904205586151444;
      }
    } else {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.349992034500000493) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)69.95000000000001705) ) ) {
            result[0] += -0.0026786838844418525;
          } else {
            result[0] += 0.0009435889665529921;
          }
        } else {
          result[0] += -0.0013357372995782294;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)78.1500000000000199) ) ) {
          result[0] += 0.007973692874339494;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)9.850000000000003197) ) ) {
            result[0] += 0.0004520653399808835;
          } else {
            result[0] += 0.003852592419393154;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)75.35000000000000853) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.400000001500001368) ) ) {
        result[0] += -0.0027335249095295482;
      } else {
        result[0] += 0.0023480768915518035;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.1500000000000199) ) ) {
        result[0] += 0.013363789467451474;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)79.05000000000001137) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
            result[0] += 0.00796179747931698;
          } else {
            result[0] += 0.0035411069814850083;
          }
        } else {
          result[0] += 0;
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.42500000000000426) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        result[0] += -0.0036497337097192517;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)72.6500000000000199) ) ) {
          result[0] += -0.0018859986700537979;
        } else {
          result[0] += -0.0006195617992818611;
        }
      }
    } else {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-7.000000267999999082) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          result[0] += -0.0031814161939546465;
        } else {
          result[0] += 0.00036463656104663666;
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)45.99999996500000776) ) ) {
          result[0] += -0.0002950180197755496;
        } else {
          result[0] += 0.006132007672684268;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)129.4999998000000403) ) ) {
        result[0] += -0.001606844060376964;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)198.9999996000000522) ) ) {
            result[0] += 0.003021343851631337;
          } else {
            result[0] += 0.009345303308218719;
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)704.4999997500000291) ) ) {
            result[0] += 3.271777950710832e-05;
          } else {
            result[0] += 0.003574997353071178;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.45000000000001705) ) ) {
        result[0] += 0.0027351359735407373;
      } else {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)3.500000000000000444) ) ) {
          result[0] += 0.015435769959197689;
        } else {
          result[0] += 0.003662440519779921;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-9.999999966499997228) ) ) {
        result[0] += -0.0017392567937655587;
      } else {
        result[0] += -0.00022551789783198945;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)58.59999996000001232) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.0009750312635312891;
          } else {
            result[0] += 0.00394381610854041;
          }
        } else {
          result[0] += -0.0012450234759823554;
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.45000000000001705) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)112.9999997500000148) ) ) {
            result[0] += 0.008938779664691537;
          } else {
            result[0] += 0.0022029496413112307;
          }
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)12.05000001500000195) ) ) {
            result[0] += 6.58355955727261e-05;
          } else {
            result[0] += 0.005257455558074933;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.6500000000000199) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)34.75000000000000711) ) ) {
        result[0] += 0.0022393387150285503;
      } else {
        result[0] += -0.0033977487563000373;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.1500000000000199) ) ) {
        result[0] += 0.014097748756408693;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.85000000000000142) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.0031628051911777055;
          } else {
            result[0] += 0.007583572674442882;
          }
        } else {
          result[0] += -0.0001535373544320464;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)665.4999957500001528) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)449.5000000000000568) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.750000000000000444) ) ) {
            result[0] += 0.007913540735840795;
          } else {
            result[0] += -0.0010756586436182262;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.650000000000001243) ) ) {
            result[0] += -0.003516943135605702;
          } else {
            result[0] += -0.0004294433367226635;
          }
        }
      } else {
        result[0] += -0.0013030847590809842;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)650.5000000000001137) ) ) {
        result[0] += -0.003596354182144361;
      } else {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.3999999999999995226) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.25000000000000355) ) ) {
            result[0] += 0.004541069149888833;
          } else {
            result[0] += 0.0003296053582702231;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.300000001500000835) ) ) {
            result[0] += 0.0011105831270106137;
          } else {
            result[0] += -0.003263320858082311;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.6500000000000199) ) ) {
      result[0] += 0;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18289.49999178000508) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
          result[0] += 0.00789512409000761;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11.75000000000000178) ) ) {
            result[0] += 0.00021784579291124828;
          } else {
            result[0] += 0.004998609255999327;
          }
        }
      } else {
        result[0] += 0.013135298031636261;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.42500000000000426) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-9.999999966499997228) ) ) {
        result[0] += -0.0017195339748663733;
      } else {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-6.99999989949999879) ) ) {
          result[0] += 0.0029534529684180463;
        } else {
          result[0] += -0.001517006887831906;
        }
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.1500000000000199) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)59.05000002500000988) ) ) {
          result[0] += 0.0010428740965942732;
        } else {
          result[0] += -0.0011503701196145268;
        }
      } else {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-3.000000100499999878) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)40.85000000000000142) ) ) {
            result[0] += 0.001707283572307514;
          } else {
            result[0] += -0.0012231310286087036;
          }
        } else {
          result[0] += 0.005760608073323965;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5.900000003500001533) ) ) {
      result[0] += -0.0032214165441691875;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)587.5000001000000793) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.350000000000000089) ) ) {
          result[0] += 0.007710179712933799;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12.85000000000000142) ) ) {
            result[0] += 0.0013119453723205864;
          } else {
            result[0] += 0.005588520629797132;
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.75000000000001421) ) ) {
          result[0] += 0;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.25000000000001421) ) ) {
            result[0] += 0.012774821110069754;
          } else {
            result[0] += 0.004121168545496307;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1015.49999924999986) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)862.5000000000001137) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)843.0000000000001137) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)140.000000085000039) ) ) {
          result[0] += -0.0012470557621707215;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)25.99999983500000411) ) ) {
            result[0] += 0.00560866963956505;
          } else {
            result[0] += -0.0005295916205172293;
          }
        }
      } else {
        result[0] += -0.0033670431051265313;
      }
    } else {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)54.44999999500000598) ) ) {
          result[0] += 0.0020820350001419063;
        } else {
          result[0] += -0.0010144130415332948;
        }
      } else {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4930512950543606832) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)397.9999987400000236) ) ) {
            result[0] += 0.0014010426900424664;
          } else {
            result[0] += 0.007102633360255924;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.650000000000001243) ) ) {
            result[0] += -0.003945386451669037;
          } else {
            result[0] += 0.003539229430831396;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.75000000000001421) ) ) {
      result[0] += -0.0011269191427923301;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1314.500000000000227) ) ) {
          result[0] += 0.009444812810048463;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
            result[0] += 0.004407777641618881;
          } else {
            result[0] += 0.0002644857286165158;
          }
        }
      } else {
        result[0] += 0.011118505458813162;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)202.3000000000000398) ) ) {
            result[0] += -0.0014899006516983114;
          } else {
            result[0] += 0.0011432217836734797;
          }
        } else {
          result[0] += -0.0017138043648643698;
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)202.3000000000000398) ) ) {
          result[0] += 0.0049283501362571355;
        } else {
          result[0] += -0.0004325209088738292;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.35000000000000853) ) ) {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.45000000000000995) ) ) {
            result[0] += -0.000636606941921042;
          } else {
            result[0] += 0.0024075252647724073;
          }
        } else {
          result[0] += -0.003844009604161748;
        }
      } else {
        result[0] += 0.006731503926217556;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)75.35000000000000853) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.400000001500001368) ) ) {
        result[0] += -0.0027706738554227808;
      } else {
        result[0] += 0.0020627800128810727;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.1500000000000199) ) ) {
        result[0] += 0.01226273594579349;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)79.05000000000001137) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5100.700000000001637) ) ) {
            result[0] += 0.005675647789418387;
          } else {
            result[0] += 0.001410850819759071;
          }
        } else {
          result[0] += -5.399696867574344e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.42500000000000426) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        result[0] += -0.00341043850133086;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)72.6500000000000199) ) ) {
          result[0] += -0.0017012295022917291;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.0009882756948926506;
          } else {
            result[0] += 0.0007068818556125102;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-7.000000267999999082) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          result[0] += -0.0029334995169192552;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)83.55000000000001137) ) ) {
            result[0] += -0.00011315729599772839;
          } else {
            result[0] += 0.0033750107739534646;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.449999997000000818) ) ) {
          result[0] += 0.00918716678610788;
        } else {
          result[0] += -0.0003620567772610996;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)16.79999999500000385) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5.900000003500001533) ) ) {
        result[0] += -0.003098730217665434;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.75000000000000355) ) ) {
            result[0] += 0.001790863195589433;
          } else {
            result[0] += 0.009251232246231093;
          }
        } else {
          result[0] += 0.0015758411719254434;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
        result[0] += 0.010852814188193794;
      } else {
        result[0] += 0.0032690118029713635;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)93.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          result[0] += -0.003173089956593079;
        } else {
          result[0] += -0.0010740867912979073;
        }
      } else {
        result[0] += 0.0017187180486507713;
      }
    } else {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)58.59999996000001232) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.0009323918624108452;
          } else {
            result[0] += 0.0035174648131689303;
          }
        } else {
          result[0] += -0.0010791423078538864;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)78.1500000000000199) ) ) {
          result[0] += 0.007430490171113475;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.85000000000000853) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0029638763975552204;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.6500000000000199) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)34.75000000000000711) ) ) {
        result[0] += 0.0019219118287964237;
      } else {
        result[0] += -0.0031849698272223277;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.1500000000000199) ) ) {
        result[0] += 0.012920545073226096;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.85000000000000142) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.002610442228445953;
          } else {
            result[0] += 0.0068846027621267646;
          }
        } else {
          result[0] += -0.0003514518160372972;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1015.49999924999986) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)862.5000000000001137) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)843.0000000000001137) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)140.000000085000039) ) ) {
          result[0] += -0.0011319223649387427;
        } else {
          result[0] += 0.00039672084327321497;
        }
      } else {
        result[0] += -0.0032603039868451932;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)70.55000000000001137) ) ) {
          result[0] += -0.0024399079147371513;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)55.75000001000000083) ) ) {
            result[0] += 0.003205727001341681;
          } else {
            result[0] += -0.000636954979793579;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)36.05000000000000426) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)397.9999987400000236) ) ) {
            result[0] += 0.0010688157432337498;
          } else {
            result[0] += 0.0056360190846802055;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)45.75000000000000711) ) ) {
            result[0] += -0.004279731240589171;
          } else {
            result[0] += 0.001992415836080909;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.75000000000001421) ) ) {
      result[0] += -0.0010772979644346325;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1314.500000000000227) ) ) {
          result[0] += 0.008930586952716112;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
            result[0] += 0.0040195804074856225;
          } else {
            result[0] += 0.00013860461158522717;
          }
        }
      } else {
        result[0] += 0.010422841942869129;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)93.35000000000000853) ) ) {
        result[0] += -0.001283759001636132;
      } else {
        result[0] += 0.0016829547961242496;
      }
    } else {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)70.05000000000001137) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.92500000000000426) ) ) {
            result[0] += -0.0035313589255982904;
          } else {
            result[0] += 0.000885816986503249;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
            result[0] += 0.00023616292695724145;
          } else {
            result[0] += -0.0017441401173502007;
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)78.1500000000000199) ) ) {
          result[0] += 0.00717761267780919;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)9.850000000000003197) ) ) {
            result[0] += 0.00026232428861678475;
          } else {
            result[0] += 0.0034567588792156637;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)75.35000000000000853) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.400000001500001368) ) ) {
        result[0] += -0.0026742707178569755;
      } else {
        result[0] += 0.0018721901924194147;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.1500000000000199) ) ) {
        result[0] += 0.011475119246169925;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.35000000000000853) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5100.700000000001637) ) ) {
            result[0] += 0.0063863185988328255;
          } else {
            result[0] += 0.0009471149479641634;
          }
        } else {
          result[0] += 0.0015601525938756015;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)665.4999957500001528) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)202.3000000000000398) ) ) {
            result[0] += -0.0013262767690078666;
          } else {
            result[0] += 0.0008423016521998723;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)49.40000000000000568) ) ) {
            result[0] += -0.0019038132667616886;
          } else {
            result[0] += 0.003722825391556729;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)202.3000000000000398) ) ) {
          result[0] += 0.0047758273665721605;
        } else {
          result[0] += -0.0003057556156889473;
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)84.1500000000000199) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
          result[0] += 0.006310724556884345;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += -0.0008985952316027234;
          } else {
            result[0] += 0.00265590781589499;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)90.59999995500000125) ) ) {
          result[0] += -0.004449989520685953;
        } else {
          result[0] += 0.0006195255557152754;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.199999993500001416) ) ) {
          result[0] += 0.0010830981228500602;
        } else {
          result[0] += 0.009668564616630859;
        }
      } else {
        result[0] += 0.00209250773900359;
      }
    } else {
      result[0] += 0.009172607631507247;
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1015.49999924999986) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        result[0] += -0.002689944579931242;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)72.6500000000000199) ) ) {
          result[0] += -0.0014931805548390417;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)56.00000002500001273) ) ) {
            result[0] += 0.0039049861806695566;
          } else {
            result[0] += -0.0005419973468179011;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)900.8500000000000227) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += 0.00010764048645413776;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.500000003500001178) ) ) {
            result[0] += 0.010067533427306142;
          } else {
            result[0] += 0.002025064576522536;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.350000000000000533) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)45.75000000000000711) ) ) {
            result[0] += -0.003857894887820491;
          } else {
            result[0] += 0;
          }
        } else {
          result[0] += 0.0018576499745540786;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.75000000000001421) ) ) {
      result[0] += -0.0010435762339929008;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1314.500000000000227) ) ) {
          result[0] += 0.008552856616675854;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
            result[0] += 0.003727279980854271;
          } else {
            result[0] += 5.9255900482336674e-05;
          }
        }
      } else {
        result[0] += 0.009965762299485505;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)93.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          result[0] += -0.0029644566169008614;
        } else {
          result[0] += -0.0009399189013475795;
        }
      } else {
        result[0] += 0.0016650930070318281;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)59.05000002500000988) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.0008491283018762868;
          } else {
            result[0] += 0.00332038989532686;
          }
        } else {
          result[0] += -0.0010408032554988162;
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.054890820000000673) ) ) {
          result[0] += 0.005967798138206655;
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.0018774253800357425;
          } else {
            result[0] += -0.001093829435560937;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)75.35000000000000853) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.400000001500001368) ) ) {
        result[0] += -0.002618275291931171;
      } else {
        result[0] += 0.001757157661486417;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.1500000000000199) ) ) {
        result[0] += 0.010928135212646644;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)79.05000000000001137) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.0023918367279166324;
          } else {
            result[0] += 0.006460872464205908;
          }
        } else {
          result[0] += -0.0002459512803364884;
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.42500000000000426) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        result[0] += -0.003056414837346358;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)72.6500000000000199) ) ) {
          result[0] += -0.001500818405390924;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.0008569718652109622;
          } else {
            result[0] += 0.00071408101268235;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.65000000000000213) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)54.49999996500000776) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)900.8500000000000227) ) ) {
            result[0] += 0.0005091127385440771;
          } else {
            result[0] += -0.0030790721594530623;
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.150000000000000383) ) ) {
            result[0] += 0.0061147605593908924;
          } else {
            result[0] += 0.0007182155915786728;
          }
        }
      } else {
        result[0] += -0.0017041036693844942;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)129.4999998000000403) ) ) {
        result[0] += -0.001524744192984971;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.35000000000000497) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.70253086250000063) ) ) {
            result[0] += 0.0006665083416737617;
          } else {
            result[0] += 0.005911563020880993;
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)682.9999997000001031) ) ) {
            result[0] += -0.000891279831837007;
          } else {
            result[0] += 0.0026240023141223434;
          }
        }
      }
    } else {
      result[0] += 0.008870119158178568;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.55000000000000426) ) ) {
        result[0] += -0.001162173835427917;
      } else {
        result[0] += 0.0013014463354123844;
      }
    } else {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)58.59999996000001232) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.0008164251619018616;
          } else {
            result[0] += 0.003177863893038391;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.950000000000001066) ) ) {
            result[0] += 0.001190897339116782;
          } else {
            result[0] += -0.001192161755651309;
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)78.1500000000000199) ) ) {
          result[0] += 0.006845614854431584;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.85000000000000853) ) ) {
            result[0] += -7.246426954710236e-05;
          } else {
            result[0] += 0.0027140673706839025;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.6500000000000199) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)34.75000000000000711) ) ) {
        result[0] += 0.0014783719189429012;
      } else {
        result[0] += -0.0029511121831213433;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.1500000000000199) ) ) {
        result[0] += 0.011681077989283951;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.85000000000000142) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.0020594551027329133;
          } else {
            result[0] += 0.006153930014864143;
          }
        } else {
          result[0] += -0.0005414167968556285;
        }
      }
    }
  }
}

