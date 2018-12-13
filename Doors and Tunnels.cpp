#include<simplecpp>
main_program
{
    initCanvas("Snakes And Ladders",1366,768);

    int cl;
    Turtle t1,t2,t3,t4;
    t1.hide();
    t2.hide();
    t3.hide();
    t4.hide();
    t1.penUp();
    t2.penUp();
    t3.penUp();
    t4.penUp();
    t1.moveTo(345,675);
    t2.moveTo(345,675);
    t3.moveTo(345,675);
    t4.moveTo(345,675);

    Rectangle background(683,384,1366,768);

    Text heading(683,50,"Snakes And Ladders");
    heading.setColor(COLOR(0,0,255));


    Rectangle startr(683,384,200,100);
    startr.setColor(COLOR(0,255,0));

    Text startt(683,384,"Start");
    startt.setColor(COLOR(0,255,0));

    Rectangle exitr(1266,718,200,100);
    exitr.setColor(COLOR(255,0,0));

    Text exitt(1266,718,"Exit");
    exitt.setColor(COLOR(255,0,0));


    int c=1;
    while(c!=0)
    {
        cl=getClick();
        if((cl/65536>=1166&&cl/65536<=1366)&&(cl%65536>=668&&cl%65536<=768))
        {
            c=0;
        }
        else if((cl/65536>=583&&cl/65536<=783)&&(cl%65536>=334&&cl%65536<=434))
        {

            startt.hide();
            heading.hide();

    Rectangle p2r(383,384,200,100);
    p2r.setColor(COLOR(0,255,0));

    Text p2t(383,384,"2 Players");
    p2t.setColor(COLOR(0,255,0));

    Text p3t(683,384,"3 Players");
    p3t.setColor(COLOR(0,255,0));

    Rectangle p4r(983,384,200,100);
    p4r.setColor(COLOR(0,255,0));

    Text p4t(983,384,"4 Players");
    p4t.setColor(COLOR(0,255,0));

            while(c!=0)
            {
                cl=getClick();
                if((cl/65536>=1166&&cl/65536<=1366)&&(cl%65536>=334&&cl%65536<=434))
                {
                    c=0;
                }
                else if((cl/65536>=283&&cl/65536<=483)&&(cl%65536>=334&&cl%65536<=434))
                {
                    c=2;
                }
                else if((cl/65536>=583&&cl/65536<=783)&&(cl%65536>=334&&cl%65536<=434))
                {
                    c=3;
                }
                else if((cl/65536>=883&&cl/65536<=1083)&&(cl%65536>=668&&cl%65536<=768))
                {
                    c=4;
                }
                if (c>1)
                {
                    p2t.hide();
                    p3t.hide();
                    p4t.hide();
                    p2r.hide();
                    p4r.hide();
                    startr.hide();


    Rectangle s1(345,675,70,70);
    s1.setColor(COLOR(255,0,0));
    s1.setFill();
    Rectangle s2(415,675,70,70);
    s2.setColor(COLOR(255,127,39));
    s2.setFill();
    Rectangle s3(485,675,70,70);
    s3.setColor(COLOR(250,201,5));
    s3.setFill();
    Rectangle s4(555,675,70,70);
    s4.setColor(COLOR(255,255,0));
    s4.setFill();
    Rectangle s5(625,675,70,70);
    s5.setColor(COLOR(129,177,37));
    s5.setFill();
    Rectangle s6(695,675,70,70);
    s6.setColor(COLOR(0,128,0));
    s6.setFill();
    Rectangle s7(765,675,70,70);
    s7.setColor(COLOR(0,236,236));
    s7.setFill();
    Rectangle s8(835,675,70,70);
    s8.setColor(COLOR(0,106,213));
    s8.setFill();
    Rectangle s9(905,675,70,70);
    s9.setColor(COLOR(204,0,204));
    s9.setFill();
    Rectangle s10(975,675,70,70);
    s10.setColor(COLOR(154,10,103));
    s10.setFill();
    Rectangle s11(345,605,70,70);
    s11.setColor(COLOR(154,10,103));
    s11.setFill();
    Rectangle s12(415,605,70,70);
    s12.setColor(COLOR(255,0,0));
    s12.setFill();
    Rectangle s13(485,605,70,70);
    s13.setColor(COLOR(255,127,39));
    s13.setFill();
    Rectangle s14(555,605,70,70);
    s14.setColor(COLOR(250,201,5));
    s14.setFill();
    Rectangle s15(625,605,70,70);
    s15.setColor(COLOR(255,255,0));
    s15.setFill();
    Rectangle s16(695,605,70,70);
    s16.setColor(COLOR(129,177,37));
    s16.setFill();
    Rectangle s17(765,605,70,70);
    s17.setColor(COLOR(0,128,0));
    s17.setFill();
    Rectangle s18(835,605,70,70);
    s18.setColor(COLOR(0,236,236));
    s18.setFill();
    Rectangle s19(905,605,70,70);
    s19.setColor(COLOR(0,106,213));
    s19.setFill();
    Rectangle s20(975,605,70,70);
    s20.setColor(COLOR(204,0,204));
    s20.setFill();
    Rectangle s21(345,535,70,70);
    s21.setColor(COLOR(204,0,204));
    s21.setFill();
    Rectangle s22(415,535,70,70);
    s22.setColor(COLOR(154,10,103));
    s22.setFill();
    Rectangle s23(485,535,70,70);
    s23.setColor(COLOR(255,0,0));
    s23.setFill();
    Rectangle s24(555,535,70,70);
    s24.setColor(COLOR(255,127,39));
    s24.setFill();
    Rectangle s25(625,535,70,70);
    s25.setColor(COLOR(250,201,5));
    s25.setFill();
    Rectangle s26(695,535,70,70);
    s26.setColor(COLOR(255,255,0));
    s26.setFill();
    Rectangle s27(765,535,70,70);
    s27.setColor(COLOR(129,177,37));
    s27.setFill();
    Rectangle s28(835,535,70,70);
    s28.setColor(COLOR(0,128,0));
    s28.setFill();
    Rectangle s29(905,535,70,70);
    s29.setColor(COLOR(0,236,236));
    s29.setFill();
    Rectangle s30(975,535,70,70);
    s30.setColor(COLOR(0,106,213));
    s30.setFill();
    Rectangle s31(345,465,70,70);
    s31.setColor(COLOR(0,106,213));
    s31.setFill();
    Rectangle s32(415,465,70,70);
    s32.setColor(COLOR(204,0,204));
    s32.setFill();
    Rectangle s33(485,465,70,70);
    s33.setColor(COLOR(154,10,103));
    s33.setFill();
    Rectangle s34(555,465,70,70);
    s34.setColor(COLOR(255,0,0));
    s34.setFill();
    Rectangle s35(625,465,70,70);
    s35.setColor(COLOR(255,127,39));
    s35.setFill();
    Rectangle s36(695,465,70,70);
    s36.setColor(COLOR(250,201,5));
    s36.setFill();
    Rectangle s37(765,465,70,70);
    s37.setColor(COLOR(255,255,0));
    s37.setFill();
    Rectangle s38(835,465,70,70);
    s38.setColor(COLOR(129,177,37));
    s38.setFill();
    Rectangle s39(905,465,70,70);
    s39.setColor(COLOR(0,128,0));
    s39.setFill();
    Rectangle s40(975,465,70,70);
    s40.setColor(COLOR(0,236,236));
    s40.setFill();
    Rectangle s41(345,395,70,70);
    s41.setColor(COLOR(0,236,236));
    s41.setFill();
    Rectangle s42(415,395,70,70);
    s42.setColor(COLOR(0,106,213));
    s42.setFill();
    Rectangle s43(485,395,70,70);
    s43.setColor(COLOR(204,0,204));
    s43.setFill();
    Rectangle s44(555,395,70,70);
    s44.setColor(COLOR(154,10,103));
    s44.setFill();
    Rectangle s45(625,395,70,70);
    s45.setColor(COLOR(255,0,0));
    s45.setFill();
    Rectangle s46(695,395,70,70);
    s46.setColor(COLOR(255,127,39));
    s46.setFill();
    Rectangle s47(765,395,70,70);
    s47.setColor(COLOR(250,201,5));
    s47.setFill();
    Rectangle s48(835,395,70,70);
    s48.setColor(COLOR(255,255,0));
    s48.setFill();
    Rectangle s49(905,395,70,70);
    s49.setColor(COLOR(129,177,37));
    s49.setFill();
    Rectangle s50(975,395,70,70);
    s50.setColor(COLOR(0,128,0));
    s50.setFill();
    Rectangle s51(345,325,70,70);
    s51.setColor(COLOR(0,128,0));
    s51.setFill();
    Rectangle s52(415,325,70,70);
    s52.setColor(COLOR(0,236,236));
    s52.setFill();
    Rectangle s53(485,325,70,70);
    s53.setColor(COLOR(0,106,213));
    s53.setFill();
    Rectangle s54(555,325,70,70);
    s54.setColor(COLOR(204,0,204));
    s54.setFill();
    Rectangle s55(625,325,70,70);
    s55.setColor(COLOR(154,10,103));
    s55.setFill();
    Rectangle s56(695,325,70,70);
    s56.setColor(COLOR(255,0,0));
    s56.setFill();
    Rectangle s57(765,325,70,70);
    s57.setColor(COLOR(255,127,39));
    s57.setFill();
    Rectangle s58(835,325,70,70);
    s58.setColor(COLOR(250,201,5));
    s58.setFill();
    Rectangle s59(905,325,70,70);
    s59.setColor(COLOR(255,255,0));
    s59.setFill();
    Rectangle s60(975,325,70,70);
    s60.setColor(COLOR(129,177,37));
    s60.setFill();
    Rectangle s61(345,255,70,70);
    s61.setColor(COLOR(129,177,37));
    s61.setFill();
    Rectangle s62(415,255,70,70);
    s62.setColor(COLOR(0,128,0));
    s62.setFill();
    Rectangle s63(485,255,70,70);
    s63.setColor(COLOR(0,236,236));
    s63.setFill();
    Rectangle s64(555,255,70,70);
    s64.setColor(COLOR(0,106,213));
    s64.setFill();
    Rectangle s65(625,255,70,70);
    s65.setColor(COLOR(204,0,204));
    s65.setFill();
    Rectangle s66(695,255,70,70);
    s66.setColor(COLOR(154,10,103));
    s66.setFill();
    Rectangle s67(765,255,70,70);
    s67.setColor(COLOR(255,0,0));
    s67.setFill();
    Rectangle s68(835,255,70,70);
    s68.setColor(COLOR(255,127,39));
    s68.setFill();
    Rectangle s69(905,255,70,70);
    s69.setColor(COLOR(250,201,5));
    s69.setFill();
    Rectangle s70(975,255,70,70);
    s70.setColor(COLOR(255,255,0));
    s70.setFill();
    Rectangle s71(345,185,70,70);
    s71.setColor(COLOR(255,255,0));
    s71.setFill();
    Rectangle s72(415,185,70,70);
    s72.setColor(COLOR(129,177,37));
    s72.setFill();
    Rectangle s73(485,185,70,70);
    s73.setColor(COLOR(0,128,0));
    s73.setFill();
    Rectangle s74(555,185,70,70);
    s74.setColor(COLOR(0,236,236));
    s74.setFill();
    Rectangle s75(625,185,70,70);
    s75.setColor(COLOR(0,106,213));
    s75.setFill();
    Rectangle s76(695,185,70,70);
    s76.setColor(COLOR(204,0,204));
    s76.setFill();
    Rectangle s77(765,185,70,70);
    s77.setColor(COLOR(154,10,103));
    s77.setFill();
    Rectangle s78(835,185,70,70);
    s78.setColor(COLOR(255,0,0));
    s78.setFill();
    Rectangle s79(905,185,70,70);
    s79.setColor(COLOR(255,127,39));
    s79.setFill();
    Rectangle s80(975,185,70,70);
    s80.setColor(COLOR(250,201,5));
    s80.setFill();
    Rectangle s81(345,115,70,70);
    s81.setColor(COLOR(250,201,5));
    s81.setFill();
    Rectangle s82(415,115,70,70);
    s82.setColor(COLOR(255,255,0));
    s82.setFill();
    Rectangle s83(485,115,70,70);
    s83.setColor(COLOR(129,177,37));
    s83.setFill();
    Rectangle s84(555,115,70,70);
    s84.setColor(COLOR(0,128,0));
    s84.setFill();
    Rectangle s85(625,115,70,70);
    s85.setColor(COLOR(0,236,236));
    s85.setFill();
    Rectangle s86(695,115,70,70);
    s86.setColor(COLOR(0,106,213));
    s86.setFill();
    Rectangle s87(765,115,70,70);
    s87.setColor(COLOR(204,0,204));
    s87.setFill();
    Rectangle s88(835,115,70,70);
    s88.setColor(COLOR(154,10,103));
    s88.setFill();
    Rectangle s89(905,115,70,70);
    s89.setColor(COLOR(255,0,0));
    s89.setFill();
    Rectangle s90(975,115,70,70);
    s90.setColor(COLOR(255,127,39));
    s90.setFill();
    Rectangle s91(345,45,70,70);
    s91.setColor(COLOR(255,127,39));
    s91.setFill();
    Rectangle s92(415,45,70,70);
    s92.setColor(COLOR(250,201,5));
    s92.setFill();
    Rectangle s93(485,45,70,70);
    s93.setColor(COLOR(255,255,0));
    s93.setFill();
    Rectangle s94(555,45,70,70);
    s94.setColor(COLOR(129,177,37));
    s94.setFill();
    Rectangle s95(625,45,70,70);
    s95.setColor(COLOR(0,128,0));
    s95.setFill();
    Rectangle s96(695,45,70,70);
    s96.setColor(COLOR(0,236,236));
    s96.setFill();
    Rectangle s97(765,45,70,70);
    s97.setColor(COLOR(0,106,213));
    s97.setFill();
    Rectangle s98(835,45,70,70);
    s98.setColor(COLOR(204,0,204));
    s98.setFill();
    Rectangle s99(905,45,70,70);
    s99.setColor(COLOR(154,10,103));
    s99.setFill();
    Rectangle s100(975,45,70,70);
    s100.setColor(COLOR(255,0,0));
    s100.setFill();
    Text t100(365,69,"100");
    Text t99(438,69,"99");
    Text t98(508,69,"98");
    Text t97(578,69,"97");
    Text t96(648,69,"96");
    Text t95(718,69,"95");
    Text t94(788,69,"94");
    Text t93(858,69,"93");
    Text t92(928,69,"92");
    Text t91(998,69,"91");
    Text t81(368,139,"81");
    Text t82(438,139,"82");
    Text t83(508,139,"83");
    Text t84(578,139,"84");
    Text t85(648,139,"85");
    Text t86(718,139,"86");
    Text t87(788,139,"87");
    Text t88(858,139,"88");
    Text t89(928,139,"89");
    Text t90(998,139,"90");
    Text t80(368,209,"80");
    Text t79(438,209,"79");
    Text t78(508,209,"78");
    Text t77(578,209,"77");
    Text t76(648,209,"76");
    Text t75(718,209,"75");
    Text t74(788,209,"74");
    Text t73(858,209,"73");
    Text t72(928,209,"72");
    Text t71(998,209,"71");
    Text t70(998,279,"70");
    Text t61(368,279,"61");
    Text t62(438,279,"62");
    Text t63(508,279,"63");
    Text t64(578,279,"64");
    Text t65(648,279,"65");
    Text t66(718,279,"66");
    Text t67(788,279,"67");
    Text t68(858,279,"68");
    Text t69(928,279,"69");
    Text t60(368,349,"60");
    Text t59(438,349,"59");
    Text t58(508,349,"58");
    Text t57(578,349,"57");
    Text t56(648,349,"56");
    Text t55(718,349,"55");
    Text t54(788,349,"54");
    Text t53(858,349,"53");
    Text t52(928,349,"52");
    Text t51(998,349,"51");
    Text t50(998,419,"50");
    Text t41(368,419,"41");
    Text t42(438,419,"42");
    Text t43(508,419,"43");
    Text t44(578,419,"44");
    Text t45(648,419,"45");
    Text t46(718,419,"46");
    Text t47(788,419,"47");
    Text t48(858,419,"48");
    Text t49(928,419,"49");
    Text t40(368,489,"40");
    Text t39(438,489,"39");
    Text t38(508,489,"38");
    Text t37(578,489,"37");
    Text t36(648,489,"36");
    Text t35(718,489,"35");
    Text t34(788,489,"34");
    Text t33(858,489,"33");
    Text t32(928,489,"32");
    Text t31(998,489,"31");
    Text t30(998,559,"30");
    Text t21(368,559,"21");
    Text t22(438,559,"22");
    Text t23(508,559,"23");
    Text t24(578,559,"24");
    Text t25(648,559,"25");
    Text t26(718,559,"26");
    Text t27(788,559,"27");
    Text t28(858,559,"28");
    Text t29(928,559,"29");
    Text t20(368,629,"20");
    Text t19(438,629,"19");
    Text t18(508,629,"18");
    Text t17(578,629,"17");
    Text t16(648,629,"16");
    Text t15(718,629,"15");
    Text t14(788,629,"14");
    Text t13(858,629,"13");
    Text t12(928,629,"12");
    Text t11(998,629,"11");
    Text t10(998,699,"10");
    Text t9(928,699,"9");
    Text t8(858,699,"8");
    Text t7(788,699,"7");
    Text t6(718,699,"6");
    Text t5(648,699,"5");
    Text t4(578,699,"4");
    Text t3(508,699,"3");
    Text t2(438,699,"2");
    Text t1(368,699,"1");
    Rectangle dice(1266,418,120,120);

    Circle d_1(1226,378,10);
    d_1.setFill();
    Circle d_3(1306,378,10);
    d_3.setFill();
    Circle d_4(1226,418,10);
    d_4.setFill();
    Circle d_5(1266,418,10);
    d_5.setFill();
    Circle d_6(1306,418,10);
    d_6.setFill();
    Circle d_7(1226,458,10);
    d_7.setFill();
    Circle d_9(1306,458,10);
    d_9.setFill();
    d_1.hide();
    d_3.hide();
    d_4.hide();
    d_5.hide();
    d_6.hide();
    d_7.hide();
    d_9.hide();
		    while(c!=0)
		    {
                cl=getClick();
                if((cl/65536>=1166&&cl/65536<=1366)&&(cl%65536>=334&&cl%65536<=434))
                {
                    c=0;
                }
                if (c==2)
                {
                    Circle a1(345,675,5);
                    Circle a2(345,675,5);
                    a1.setColor(COLOR(255,0,0));
                    a2.setColor(COLOR(255,0,0));
                }
		    }
            }
            }
        }
    }
}
