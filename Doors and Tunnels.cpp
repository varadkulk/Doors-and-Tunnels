#include<simplecpp>
#include<stdlib.h>
#include<time.h>
int diceval()
{
    time_t t;
    srand((unsigned)time(&t));
    t=(rand()%6)+1;
    return t;
}
main_program
{
    initCanvas("Snakes And Ladders",1366,768);

    int cl,p1,p2,p3,p4,n,b,x,i,gx,gy,d,e=1;
    Turtle turt1,turt2,turt3,turt4;

    turt1.hide();
    turt2.hide();
    turt3.hide();
    turt4.hide();

    turt1.penUp();
    turt2.penUp();
    turt3.penUp();
    turt4.penUp();

    turt1.right(90);
    turt1.forward(291);
    turt1.right(90);
    turt1.forward(338);
    turt1.left(180);
    turt2.right(90);
    turt2.forward(291);
    turt2.right(90);
    turt2.forward(338);
    turt2.left(180);
    turt3.right(90);
    turt3.forward(291);
    turt3.right(90);
    turt3.forward(338);
    turt3.left(180);
    turt4.right(90);
    turt4.forward(291);
    turt4.right(90);
    turt4.forward(338);
    turt4.left(180);

    Rectangle background(683,384,1366,768);
	background.setFill();

    Text heading(683,50,"Snakes And Ladders");
    heading.setColor(COLOR(0,0,255));

    Rectangle startr(683,384,200,100);
    startr.setColor(COLOR(0,255,0));

    Text startt(683,384,"Start");
    startt.setColor(COLOR(0,255,0));

    Rectangle exitr(1265,717,200,100);
    exitr.setColor(COLOR(255,0,0));

    Text exitt(1266,718,"Exit");
    exitt.setColor(COLOR(255,0,0));

    int c=1;
    while(c!=0)
    {
        cl=getClick();
        if((cl/65536>=1165&&cl/65536<=1366)&&(cl%65536>=668&&cl%65536<=767))
        {
            c=0; exitr.setFill(); wait(0.1);
        }
        else if((cl/65536>=583&&cl/65536<=783)&&(cl%65536>=334&&cl%65536<=434))
        {
            startr.setFill();
            wait(0.1);
            startt.hide();
            startr.hide();

            Rectangle p2r(383,384,200,100);
            p2r.setColor(COLOR(0,255,0));

            Text p2t(383,384,"2 Players");
            p2t.setColor(COLOR(0,255,0));

            Rectangle p3r(683,384,200,100);
    		p3r.setColor(COLOR(0,255,0));

            Text p3t(683,384,"3 Players");
            p3t.setColor(COLOR(0,255,0));

            Rectangle p4r(983,384,200,100);
            p4r.setColor(COLOR(0,255,0));

            Text p4t(983,384,"4 Players");
            p4t.setColor(COLOR(0,255,0));

            while(c!=0)
            {
                cl=getClick();
       			if((cl/65536>=1165&&cl/65536<=1366)&&(cl%65536>=667&&cl%65536<=767))
                {
                    c=0;
                    exitr.setFill();
                    wait(0.1);
                }
                else if((cl/65536>=283&&cl/65536<=483)&&(cl%65536>=334&&cl%65536<=434))
                {
                    c=2;
                    p2r.setFill();
                    wait(0.1);
                }
                else if((cl/65536>=583&&cl/65536<=783)&&(cl%65536>=334&&cl%65536<=434))
                {
                    c=3;
                    p3r.setFill();
                    wait(0.1);
                }
                else if((cl/65536>=883&&cl/65536<=1083)&&(cl%65536>=334&&cl%65536<=434))
                {
                    c=4;
                    p4r.setFill();
                    wait(0.1);
                }
                if (c>1)
                {
                    p2t.hide();
                    p3t.hide();
                    p4t.hide();
                    p2r.hide();
                    p3r.hide();
                    p4r.hide();
                    heading.hide();

					Rectangle s1(345,675,70,70);
                    s1.setColor(COLOR(121,240,87));
                    s1.setFill();
                    Rectangle s2(415,675,70,70);
                    s2.setColor(COLOR(255,248,102));
                    s2.setFill();
					Rectangle s3(485,675,70,70);
                    s3.setColor(COLOR(121,240,87));
                    s3.setFill();
                    Rectangle s4(555,675,70,70);
                    s4.setColor(COLOR(255,248,102));
                    s4.setFill();
                    Rectangle s5(625,675,70,70);
                    s5.setColor(COLOR(121,240,87));
                    s5.setFill();
                    Rectangle s6(695,675,70,70);
                    s6.setColor(COLOR(255,248,102));
                    s6.setFill();
                    Rectangle s7(765,675,70,70);
                    s7.setColor(COLOR(121,240,87));
                    s7.setFill();
                    Rectangle s8(835,675,70,70);
                    s8.setColor(COLOR(255,248,102));
                    s8.setFill();
                    Rectangle s9(905,675,70,70);
                    s9.setColor(COLOR(121,240,87));
                    s9.setFill();
                    Rectangle s10(975,675,70,70);
                    s10.setColor(COLOR(255,248,102));
                    s10.setFill();
                    Rectangle s11(345,605,70,70);
                    s11.setColor(COLOR(255,248,102));
                    s11.setFill();
                    Rectangle s12(415,605,70,70);
                    s12.setColor(COLOR(121,240,87));
                    s12.setFill();
                    Rectangle s13(485,605,70,70);
                    s13.setColor(COLOR(255,248,102));
                    s13.setFill();
                    Rectangle s14(555,605,70,70);
                    s14.setColor(COLOR(121,240,87));
                    s14.setFill();
                    Rectangle s15(625,605,70,70);
                    s15.setColor(COLOR(255,248,102));
                    s15.setFill();
                    Rectangle s16(695,605,70,70);
                    s16.setColor(COLOR(121,240,87));
                    s16.setFill();
                    Rectangle s17(765,605,70,70);
                    s17.setColor(COLOR(255,248,102));
                    s17.setFill();
                    Rectangle s18(835,605,70,70);
                    s18.setColor(COLOR(121,240,87));
                    s18.setFill();
                    Rectangle s19(905,605,70,70);
                    s19.setColor(COLOR(255,248,102));
                    s19.setFill();
                    Rectangle s20(975,605,70,70);
                    s20.setColor(COLOR(121,240,87));
                    s20.setFill();
                    Rectangle s21(345,535,70,70);
                    s21.setColor(COLOR(121,240,87));
                    s21.setFill();
                    Rectangle s22(415,535,70,70);
                    s22.setColor(COLOR(255,248,102));
                    s22.setFill();
                    Rectangle s23(485,535,70,70);
                    s23.setColor(COLOR(121,240,87));
                    s23.setFill();
                    Rectangle s24(555,535,70,70);
                    s24.setColor(COLOR(255,248,102));
                    s24.setFill();
                    Rectangle s25(625,535,70,70);
                    s25.setColor(COLOR(121,240,87));
                    s25.setFill();
                    Rectangle s26(695,535,70,70);
                    s26.setColor(COLOR(255,248,102));
                    s26.setFill();
                    Rectangle s27(765,535,70,70);
                    s27.setColor(COLOR(121,240,87));
                    s27.setFill();
                    Rectangle s28(835,535,70,70);
                    s28.setColor(COLOR(255,248,102));
                    s28.setFill();
                    Rectangle s29(905,535,70,70);
                    s29.setColor(COLOR(121,240,87));
                    s29.setFill();
                    Rectangle s30(975,535,70,70);
                    s30.setColor(COLOR(255,248,102));
                    s30.setFill();
                    Rectangle s31(345,465,70,70);
                    s31.setColor(COLOR(255,248,102));
                    s31.setFill();
                    Rectangle s32(415,465,70,70);
                    s32.setColor(COLOR(121,240,87));
                    s32.setFill();
                    Rectangle s33(485,465,70,70);
                    s33.setColor(COLOR(255,248,102));
                    s33.setFill();
                    Rectangle s34(555,465,70,70);
                    s34.setColor(COLOR(121,240,87));
                    s34.setFill();
                    Rectangle s35(625,465,70,70);
                    s35.setColor(COLOR(255,248,102));
                    s35.setFill();
                    Rectangle s36(695,465,70,70);
                    s36.setColor(COLOR(121,240,87));
                    s36.setFill();
                    Rectangle s37(765,465,70,70);
                    s37.setColor(COLOR(255,248,102));
                    s37.setFill();
                    Rectangle s38(835,465,70,70);
                    s38.setColor(COLOR(121,240,87));
                    s38.setFill();
                    Rectangle s39(905,465,70,70);
                    s39.setColor(COLOR(255,248,102));
                    s39.setFill();
                    Rectangle s40(975,465,70,70);
                    s40.setColor(COLOR(121,240,87));
                    s40.setFill();
                    Rectangle s41(345,395,70,70);
                    s41.setColor(COLOR(121,240,87));
                    s41.setFill();
                    Rectangle s42(415,395,70,70);
                    s42.setColor(COLOR(255,248,102));
                    s42.setFill();
                    Rectangle s43(485,395,70,70);
                    s43.setColor(COLOR(121,240,87));
                    s43.setFill();
                    Rectangle s44(555,395,70,70);
                    s44.setColor(COLOR(255,248,102));
                    s44.setFill();
                    Rectangle s45(625,395,70,70);
                    s45.setColor(COLOR(121,240,87));
                    s45.setFill();
                    Rectangle s46(695,395,70,70);
                    s46.setColor(COLOR(255,248,102));
                    s46.setFill();
                    Rectangle s47(765,395,70,70);
                    s47.setColor(COLOR(121,240,87));
                    s47.setFill();
                    Rectangle s48(835,395,70,70);
                    s48.setColor(COLOR(255,248,102));
                    s48.setFill();
                    Rectangle s49(905,395,70,70);
                    s49.setColor(COLOR(121,240,87));
                    s49.setFill();
                    Rectangle s50(975,395,70,70);
                    s50.setColor(COLOR(255,248,102));
                    s50.setFill();
                    Rectangle s51(345,325,70,70);
                    s51.setColor(COLOR(255,248,102));
                    s51.setFill();
                    Rectangle s52(415,325,70,70);
                    s52.setColor(COLOR(121,240,87));
                    s52.setFill();
                    Rectangle s53(485,325,70,70);
                    s53.setColor(COLOR(255,248,102));
                    s53.setFill();
                    Rectangle s54(555,325,70,70);
                    s54.setColor(COLOR(121,240,87));
                    s54.setFill();
                    Rectangle s55(625,325,70,70);
                    s55.setColor(COLOR(255,248,102));
                    s55.setFill();
                    Rectangle s56(695,325,70,70);
                    s56.setColor(COLOR(121,240,87));
                    s56.setFill();
                    Rectangle s57(765,325,70,70);
                    s57.setColor(COLOR(255,248,102));
                    s57.setFill();
                    Rectangle s58(835,325,70,70);
                    s58.setColor(COLOR(121,240,87));
                    s58.setFill();
                    Rectangle s59(905,325,70,70);
                    s59.setColor(COLOR(255,248,102));
                    s59.setFill();
                    Rectangle s60(975,325,70,70);
                    s60.setColor(COLOR(121,240,87));
                    s60.setFill();
                    Rectangle s61(345,255,70,70);
                    s61.setColor(COLOR(121,240,87));
                    s61.setFill();
                    Rectangle s62(415,255,70,70);
                    s62.setColor(COLOR(255,248,102));
                    s62.setFill();
                    Rectangle s63(485,255,70,70);
                    s63.setColor(COLOR(121,240,87));
                    s63.setFill();
                    Rectangle s64(555,255,70,70);
                    s64.setColor(COLOR(255,248,102));
                    s64.setFill();
                    Rectangle s65(625,255,70,70);
                    s65.setColor(COLOR(121,240,87));
                    s65.setFill();
                    Rectangle s66(695,255,70,70);
                    s66.setColor(COLOR(255,248,102));
                    s66.setFill();
                    Rectangle s67(765,255,70,70);
                    s67.setColor(COLOR(121,240,87));
                    s67.setFill();
                    Rectangle s68(835,255,70,70);
                    s68.setColor(COLOR(255,248,102));
                    s68.setFill();
                    Rectangle s69(905,255,70,70);
                    s69.setColor(COLOR(121,240,87));
                    s69.setFill();
                    Rectangle s70(975,255,70,70);
                    s70.setColor(COLOR(255,248,102));
                    s70.setFill();
                    Rectangle s71(345,185,70,70);
                    s71.setColor(COLOR(255,248,102));
                    s71.setFill();
                    Rectangle s72(415,185,70,70);
                    s72.setColor(COLOR(121,240,87));
                    s72.setFill();
                    Rectangle s73(485,185,70,70);
                    s73.setColor(COLOR(255,248,102));
                    s73.setFill();
                    Rectangle s74(555,185,70,70);
                    s74.setColor(COLOR(121,240,87));
                    s74.setFill();
                    Rectangle s75(625,185,70,70);
                    s75.setColor(COLOR(255,248,102));
                    s75.setFill();
                    Rectangle s76(695,185,70,70);
                    s76.setColor(COLOR(121,240,87));
                    s76.setFill();
                    Rectangle s77(765,185,70,70);
                    s77.setColor(COLOR(255,248,102));
                    s77.setFill();
                    Rectangle s78(835,185,70,70);
                    s78.setColor(COLOR(121,240,87));
                    s78.setFill();
                    Rectangle s79(905,185,70,70);
                    s79.setColor(COLOR(255,248,102));
                    s79.setFill();
                    Rectangle s80(975,185,70,70);
                    s80.setColor(COLOR(121,240,87));
                    s80.setFill();
                    Rectangle s81(345,115,70,70);
                    s81.setColor(COLOR(121,240,87));
                    s81.setFill();
                    Rectangle s82(415,115,70,70);
                    s82.setColor(COLOR(255,248,102));
                    s82.setFill();
                    Rectangle s83(485,115,70,70);
                    s83.setColor(COLOR(121,240,87));
                    s83.setFill();
                    Rectangle s84(555,115,70,70);
                    s84.setColor(COLOR(255,248,102));
                    s84.setFill();
                    Rectangle s85(625,115,70,70);
                    s85.setColor(COLOR(121,240,87));
                    s85.setFill();
                    Rectangle s86(695,115,70,70);
                    s86.setColor(COLOR(255,248,102));
                    s86.setFill();
                    Rectangle s87(765,115,70,70);
                    s87.setColor(COLOR(121,240,87));
                    s87.setFill();
                    Rectangle s88(835,115,70,70);
                    s88.setColor(COLOR(255,248,102));
                    s88.setFill();
                    Rectangle s89(905,115,70,70);
                    s89.setColor(COLOR(121,240,87));
                    s89.setFill();
                    Rectangle s90(975,115,70,70);
                    s90.setColor(COLOR(255,248,102));
                    s90.setFill();
                    Rectangle s91(345,45,70,70);
                    s91.setColor(COLOR(255,248,102));
                    s91.setFill();
                    Rectangle s92(415,45,70,70);
                    s92.setColor(COLOR(121,240,87));
                    s92.setFill();
                    Rectangle s93(485,45,70,70);
                    s93.setColor(COLOR(255,248,102));
                    s93.setFill();
                    Rectangle s94(555,45,70,70);
                    s94.setColor(COLOR(121,240,87));
                    s94.setFill();
                    Rectangle s95(625,45,70,70);
                    s95.setColor(COLOR(255,248,102));
                    s95.setFill();
                    Rectangle s96(695,45,70,70);
                    s96.setColor(COLOR(121,240,87));
                    s96.setFill();
                    Rectangle s97(765,45,70,70);
                    s97.setColor(COLOR(255,248,102));
                    s97.setFill();
                    Rectangle s98(835,45,70,70);
                    s98.setColor(COLOR(121,240,87));
                    s98.setFill();
                    Rectangle s99(905,45,70,70);
                    s99.setColor(COLOR(255,248,102));
                    s99.setFill();
                    Rectangle s100(975,45,70,70);
                    s100.setColor(COLOR(121,240,87));
                    s100.setFill();
                    Text t100(365,69,"100");
                    t100.setColor(COLOR(138,43,226));
                    Text t99(438,69,"99");
                    t99.setColor(COLOR(255,0,0));
					Text t98(508,69,"98");
                    t98.setColor(COLOR(0,0,255));
                    Text t97(578,69,"97");
                    t97.setColor(COLOR(238,130,238));
                    Text t96(648,69,"96");
                    t96.setColor(COLOR(138,43,226));
                    Text t95(718,69,"95");
                    t95.setColor(COLOR(255,0,0));
					Text t94(788,69,"94");
                    t94.setColor(COLOR(0,0,255));
                    Text t93(858,69,"93");
                    t93.setColor(COLOR(238,130,238));
                    Text t92(928,69,"92");
                    t92.setColor(COLOR(138,43,226));
                    Text t91(998,69,"91");
                    t91.setColor(COLOR(255,0,0));
					Text t90(998,139,"90");
                    t90.setColor(COLOR(0,0,255));
                    Text t89(928,139,"89");
                    t89.setColor(COLOR(255,0,0));
					Text t88(858,139,"88");
                    t88.setColor(COLOR(138,43,226));
                    Text t87(788,139,"87");
                    t87.setColor(COLOR(238,130,238));
                    Text t86(718,139,"86");
                    t86.setColor(COLOR(0,0,255));
                    Text t85(648,139,"85");
                    t85.setColor(COLOR(255,0,0));
					Text t84(578,139,"84");
                    t84.setColor(COLOR(138,43,226));
                    Text t83(508,139,"83");
                    t83.setColor(COLOR(238,130,238));
                    Text t82(438,139,"82");
                    t82.setColor(COLOR(0,0,255));
                    Text t81(368,139,"81");
                    t81.setColor(COLOR(255,0,0));
					Text t80(368,209,"80");
                    t80.setColor(COLOR(0,0,255));
                    Text t79(438,209,"79");
                    t79.setColor(COLOR(238,130,238));
                    Text t78(508,209,"78");
                    t78.setColor(COLOR(138,43,226));
                    Text t77(578,209,"77");
                    t77.setColor(COLOR(255,0,0));
					Text t76(648,209,"76");
                    t76.setColor(COLOR(0,0,255));
                    Text t75(718,209,"75");
                    t75.setColor(COLOR(238,130,238));
                    Text t74(788,209,"74");
                    t74.setColor(COLOR(138,43,226));
                    Text t73(858,209,"73");
                    t73.setColor(COLOR(255,0,0));
					Text t72(928,209,"72");
                    t72.setColor(COLOR(0,0,255));
                    Text t71(998,209,"71");
                    t71.setColor(COLOR(238,130,238));
                    Text t70(998,279,"70");
                    t70.setColor(COLOR(138,43,226));
                    Text t69(928,279,"69");
                    t69.setColor(COLOR(238,130,238));
                    Text t68(858,279,"68");
                    t68.setColor(COLOR(0,0,255));
                    Text t67(788,279,"67");
                    t67.setColor(COLOR(255,0,0));
					Text t66(718,279,"66");
                    t66.setColor(COLOR(138,43,226));
                    Text t65(648,279,"65");
                    t65.setColor(COLOR(238,130,238));
                    Text t64(578,279,"64");
                    t64.setColor(COLOR(0,0,255));
                    Text t63(508,279,"63");
                    t63.setColor(COLOR(255,0,0));
					Text t62(438,279,"62");
                    t62.setColor(COLOR(138,43,226));
                    Text t61(368,279,"61");
                    t61.setColor(COLOR(238,130,238));
                    Text t60(368,349,"60");
                    t60.setColor(COLOR(138,43,226));
                    Text t59(438,349,"59");
                    t59.setColor(COLOR(255,0,0));
					Text t58(508,349,"58");
                    t58.setColor(COLOR(0,0,255));
                    Text t57(578,349,"57");
                    t57.setColor(COLOR(238,130,238));
                    Text t56(648,349,"56");
                    t56.setColor(COLOR(138,43,226));
                    Text t55(718,349,"55");
                    t55.setColor(COLOR(255,0,0));
					Text t54(788,349,"54");
                    t54.setColor(COLOR(0,0,255));
                    Text t53(858,349,"53");
                    t53.setColor(COLOR(238,130,238));
                    Text t52(928,349,"52");
                    t52.setColor(COLOR(138,43,226));
                    Text t51(998,349,"51");
                    t51.setColor(COLOR(255,0,0));
					Text t50(998,419,"50");
                    t50.setColor(COLOR(0,0,255));
                    Text t49(928,419,"49");
                    t49.setColor(COLOR(255,0,0));
					Text t48(858,419,"48");
                    t48.setColor(COLOR(138,43,226));
                    Text t47(788,419,"47");
                    t47.setColor(COLOR(238,130,238));
                    Text t46(718,419,"46");
                    t46.setColor(COLOR(0,0,255));
                    Text t45(648,419,"45");
                    t45.setColor(COLOR(255,0,0));
					Text t44(578,419,"44");
                    t44.setColor(COLOR(138,43,226));
                    Text t43(508,419,"43");
                    t43.setColor(COLOR(238,130,238));
                    Text t42(438,419,"42");
                    t42.setColor(COLOR(0,0,255));
                    Text t41(368,419,"41");
                    t41.setColor(COLOR(255,0,0));
					Text t40(368,489,"40");
                    t40.setColor(COLOR(0,0,255));
                    Text t39(438,489,"39");
                    t39.setColor(COLOR(238,130,238));
                    Text t38(508,489,"38");
                    t38.setColor(COLOR(138,43,226));
                    Text t37(578,489,"37");
                    t37.setColor(COLOR(255,0,0));
					Text t36(648,489,"36");
                    t36.setColor(COLOR(0,0,255));
                    Text t35(718,489,"35");
                    t35.setColor(COLOR(238,130,238));
                    Text t34(788,489,"34");
                    t34.setColor(COLOR(138,43,226));
                    Text t33(858,489,"33");
                    t33.setColor(COLOR(255,0,0));
					Text t32(928,489,"32");
                    t32.setColor(COLOR(0,0,255));
                    Text t31(998,489,"31");
                    t31.setColor(COLOR(238,130,238));
                    Text t30(998,559,"30");
                    t30.setColor(COLOR(138,43,226));
                    Text t29(928,559,"29");
                    t29.setColor(COLOR(238,130,238));
                    Text t28(858,559,"28");
                    t28.setColor(COLOR(0,0,255));
                    Text t27(788,559,"27");
                    t27.setColor(COLOR(255,0,0));
					Text t26(718,559,"26");
                    t26.setColor(COLOR(138,43,226));
                    Text t25(648,559,"25");
                    t25.setColor(COLOR(238,130,238));
                    Text t24(578,559,"24");
					t24.setColor(COLOR(0,0,255));
                    Text t23(508,559,"23");
                    t23.setColor(COLOR(255,0,0));
					Text t22(438,559,"22");
                    t22.setColor(COLOR(138,43,226));
                    Text t21(368,559,"21");
                    t21.setColor(COLOR(238,130,238));
                    Text t20(368,629,"20");
                    t20.setColor(COLOR(138,43,226));
                    Text t19(438,629,"19");
                    t19.setColor(COLOR(255,0,0));
					Text t18(508,629,"18");
                    t18.setColor(COLOR(0,0,255));
                    Text t17(578,629,"17");
                    t17.setColor(COLOR(238,130,238));
                    Text t16(648,629,"16");
                    t16.setColor(COLOR(138,43,226));
                    Text t15(718,629,"15");
                    t15.setColor(COLOR(255,0,0));
					Text t14(788,629,"14");
                    t14.setColor(COLOR(0,0,255));
                    Text t13(858,629,"13");
                    t13.setColor(COLOR(238,130,238));
                    Text t12(928,629,"12");
                    t12.setColor(COLOR(138,43,226));
                    Text t11(998,629,"11");
                    t11.setColor(COLOR(255,0,0));
					Text t10(998,699,"10");
                    t10.setColor(COLOR(0,0,255));
                    Text t9(928,699,"9");
                    t9.setColor(COLOR(255,0,0));
					Text t8(858,699,"8");
                    t8.setColor(COLOR(138,43,226));
                    Text t7(788,699,"7");
                    t7.setColor(COLOR(238,130,238));
                    Text t6(718,699,"6");
                    t6.setColor(COLOR(0,0,255));
                    Text t5(648,699,"5");
                    t5.setColor(COLOR(255,0,0));
					Text t4(578,699,"4");
                    t4.setColor(COLOR(138,43,226));
                    Text t3(508,699,"3");
                    t3.setColor(COLOR(238,130,238));
                    Text t2(438,699,"2");
                    t2.setColor(COLOR(0,0,255));
                    Text t1(368,699,"1");
					t1.setColor(COLOR(255,0,0));

                    Rectangle r11(485,640,20,90);
                    r11.setColor(COLOR(158,158,158));
                    r11.setFill();
                    Rectangle r12(555,675,160,20);
                    r12.setColor(COLOR(158,158,158));
                    r12.setFill();

                    Rectangle r21(695,535,20,160);
                    r21.setColor(COLOR(158,158,158));
                    r21.setFill();
                    Rectangle r22(515,465,370,20);
                    r22.setColor(COLOR(158,158,158));
                    r22.setFill();

                    Rectangle r31(905,535,20,300);
                    r31.setColor(COLOR(158,158,158));
                    r31.setFill();
                    Rectangle r32(870,395,90,20);
                    r32.setColor(COLOR(158,158,158));
                    r32.setFill();

                    Rectangle r41(625,255,20,160);
                    r41.setColor(COLOR(158,158,158));
                    r41.setFill();
                    Rectangle r42(730,325,230,20);
                    r42.setColor(COLOR(158,158,158));
                    r42.setFill();

                    Rectangle r51(415,220,20,370);
                    r51.setColor(COLOR(158,158,158));
                    r51.setFill();
                    Rectangle r52(485,395,160,20);
                    r52.setColor(COLOR(158,158,158));
                    r52.setFill();

  	                Rectangle r61(555,115,20,160);
                    r61.setColor(COLOR(158,158,158));
                    r61.setFill();
                    Rectangle r62(520,185,90,20);
                    r62.setColor(COLOR(158,158,158));
                    r62.setFill();

                    Rectangle r71(765,115,20,160);
                    r71.setColor(COLOR(158,158,158));
                    r71.setFill();
                    Rectangle r72(870,185,230,20);
                    r72.setColor(COLOR(158,158,158));
                    r72.setFill();

					Rectangle d11(740,685,20,50);
					d11.setColor(COLOR(170,163,121));
					d11.setFill();
					Circle d12(747,685,2);
					d12.setFill();

					Rectangle d21(530,615,20,50);
					d21.setColor(COLOR(170,163,121));
					d21.setFill();
					Circle d22(537,615,2);
					d22.setFill();

					Rectangle d31(320,265,20,50);
					d31.setColor(COLOR(170,163,121));
					d31.setFill();
					Circle d32(327,265,2);
					d32.setFill();

					Rectangle d41(740,405,20,50);
					d41.setColor(COLOR(170,163,121));
					d41.setFill();
					Circle d42(747,405,2);
					d42.setFill();

					Rectangle d51(950,265,20,50);
					d51.setColor(COLOR(170,163,121));
					d51.setFill();
					Circle d52(957,265,2);
					d52.setFill();

                    Rectangle dice(1266,418,120,120);
                    dice.setColor(COLOR(255,255,255));
                    dice.setFill();
                    Text dicet(1266,300,"Dice");
                    dicet.setColor(COLOR(255,255,255));
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
                        if (c==2)
                        {
                            Circle a1(345,675,10);
                            Circle a2(345,675,10);
                            a1.setColor(COLOR(255,0,0));
                            a2.setColor(COLOR(0,0,255));
                            a1.setFill();
                            a2.setFill();
                            p1=1;
                            p2=1;
                            Text turn(1266,100,"Turn");
                            turn.setColor(COLOR(255,255,255));
                            Text p1t(1266,200,"Player 1");
                            Text p2t(1266,200,"Player 2");
                            p1t.setColor(COLOR(255,0,0));
                            p2t.setColor(COLOR(0,0,255));
                            p2t.hide();
                            Text w(100,100,"Winner");
                            w.setColor(COLOR(255,255,255));
                            Text p1w(100,200,"Player 1");
                            Text p2w(100,200,"Player 2");
                            p1w.setColor(COLOR(255,0,0));
                            p2w.setColor(COLOR(0,0,255));
                            w.hide();
                            p1w.hide();
                            p2w.hide();
                            b=0;
                            x=1;

                            while((c!=0)&&(e!=0))
                            {
                            	gx=turt1.getX();
                                gy=turt1.getY();
                                a1.moveTo(gx,gy);
                                gx=turt2.getX();
                                gy=turt2.getY();
                                a2.moveTo(gx,gy);
                                if((p1==p2)&&(b==0))
                                {
                                    a1.move(-15,0);
                                    a2.move(15,0);
                                    b=1;
                                }
                                cl=getClick();
                                if((cl/65536>=1165&&cl/65536<=1366)&&(cl%65536>=668&&cl%65536<=767))
                                {
                                    c=0; exitr.setFill(); wait(0.1);
                                }
                                else if((cl/65536>=1206&&cl/65536<=1326)&&(cl%65536>=358&&cl%65536<=478))
                                {
                                    b=0;
                                    n=diceval();
                                    d_1.hide();
                                    d_3.hide();
                                    d_4.hide();
                                    d_5.hide();
                                    d_6.hide();
                                    d_7.hide();
                                    d_9.hide();
                                    if(n==1)
                                    {
                                        d_5.show();
                                    }
                                    else if(n==2)
                                    {
                                        d_1.show();
                                        d_9.show();
                                    }
                                    else if(n==3)
                                    {
                                        d_1.show();
                                        d_9.show();
                                        d_5.show();
                                    }
                                    else if(n==4)
                                    {
                                        d_1.show();
                                        d_3.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    else if(n==5)
                                    {
                                        d_5.show();
                                        d_1.show();
                                        d_3.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    else if(n==6)
                                    {
                                        d_1.show();
                                        d_3.show();
                                        d_4.show();
                                        d_6.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    for(i=1;i<=n;i++)
                                    {
                                        if(x==1)
                                        {
                                            if(p1==100)
                                            {
                                                turt1.right(90);
                                                d=1;
                                            }
                                            if(p1%10==0)
                                            {
                                                if(p1%20==0)
                                                turt1.right(90);
                                                else
                                                turt1.left(90);
                                            }
                                            if((p1!=1)&&(p1%10==1))
                                            {
                                                if(p1%20==1)
                                                turt1.right(90);
                                                else
                                                turt1.left(90);
                                            }
                                            turt1.forward(70);
                                            gx=turt1.getX();
                                            gy=turt1.getY();
                                            wait(0.1);
                                            a1.moveTo(gx,gy);
                                            if (d==1)
                                            p1--;
                                            else
                                            p1++;
                                        }
                                        if(x==2)
                                        {
                                            if(p2==100)
                                            {
                                                turt2.right(90);
                                                d=2;
                                            }
                                            if(p2%10==0)
                                            {
                                                if(p2%20==0)
                                                turt2.right(90);
                                                else
                                                turt2.left(90);
                                            }
                                            if((p2!=1)&&(p2%10==1))
                                            {
                                                if(p2%20==1)
                                                turt2.right(90);
                                                else
                                                turt2.left(90);
                                            }
                                            turt2.forward(70);
                                            gx=turt2.getX();
                                            gy=turt2.getY();
                                            wait(0.1);
                                            a2.moveTo(gx,gy);
                                            if(d==2)
                                            p2--;
                                            else
                                            p2++;
                                        }
                                    }
                                    if(p1==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p1w.show();
                                        e=0;
                                    }
                                    else if(p2==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p2w.show();
                                        e=0;
                                    }
                                    else
                                    {
                                        if(d==1)
                                        turt1.left(180);
                                        if(d==2)
                                        turt2.left(180);
                                        d=0;
                                        if(x==1)
                                        {
                                            if(p1==18)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=5;
                                            }
                                            if(p1==40)
                                            {
                                            	wait(0.3);
                                            	turt1.right(180);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	p1=15;
                                            }
                                            if(p1==48)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	p1=9;
                                            }
                                            if(p1==76)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(180);
                                            	p1=53;
                                            }
                                            if(p1==94)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	p1=71;
                                            }
                                            if(p1==97)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=78;
                                            }

                                            if(p1==99)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=44;
                                            }

                                            if(p1==7)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(70);
                                            	turt1.left(90);
                                            	turt1.forward(210);
                                            	turt1.left(90);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=33;
                                            }

                                            if(p1==17)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(210);
                                            	turt1.right(90);
                                            	turt1.forward(210);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=41;
                                            }

                                            if(p1==61)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(140);
                                            	turt1.right(90);
                                            	turt1.forward(140);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=83;
                                            }

                                            if(p1==47)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(140);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	turt1.left(180);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=66;
                                            }

                                            if(p1==70)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(210);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=91;
                                            }

                                            x=2;
                                            p1t.hide();
                                            p2t.show();
                                        }
                                        else
                                        {
                                            if(p2==18)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=5;
                                            }
                                            if(p2==40)
                                            {
                                            	wait(0.3);
                                            	turt2.right(180);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	p2=15;
                                            }
                                            if(p2==48)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	p2=9;
                                            }
                                            if(p2==76)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(180);
                                            	p2=53;
                                            }
                                            if(p2==94)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	p2=71;
                                            }
                                            if(p2==97)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=78;
                                            }

                                            if(p2==99)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=44;
                                            }

                                            if(p2==7)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(70);
                                            	turt2.left(90);
                                            	turt2.forward(210);
                                            	turt2.left(90);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=33;
                                            }

                                            if(p2==17)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(210);
                                            	turt2.right(90);
                                            	turt2.forward(210);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=41;
                                            }

                                            if(p2==61)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(140);
                                            	turt2.right(90);
                                            	turt2.forward(140);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=83;
                                            }

                                            if(p2==47)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(140);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	turt2.left(180);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=66;
                                            }

                                            if(p2==70)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(210);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=91;
                                            }

                                            x=1;
                                            p2t.hide();
                                            p1t.show();
                                        }
                                    }
                                }
                            }
                            while(c!=0)
                            {
                                cl=getClick();
                                if((cl/65536>=1165&&cl/65536<=1366)&&(cl%65536>=668&&cl%65536<=767))
                                {
                                    c=0; exitr.setFill(); wait(0.1);
                                }
                            }
                        }
                        if (c==3)
                        {
                            Circle a1(345,675,10);
                            Circle a2(345,675,10);
                            Circle a3(345,675,10);
                            a1.setColor(COLOR(255,0,0));
                            a2.setColor(COLOR(0,0,255));
                            a3.setColor(COLOR(238,130,238));
                            a1.setFill();
                            a2.setFill();
                            a3.setFill();
                            p1=1;
                            p2=1;
                            p3=1;
                            Text turn(1266,100,"Turn");
                            turn.setColor(COLOR(255,255,255));
                            Text p1t(1266,200,"Player 1");
                            Text p2t(1266,200,"Player 2");
                            Text p3t(1266,200,"Player 3");
                            p1t.setColor(COLOR(255,0,0));
                            p2t.setColor(COLOR(0,0,255));
                            p3t.setColor(COLOR(238,130,238));
                            p2t.hide();
                            p3t.hide();
                            Text w(100,100,"Winner");
                            w.setColor(COLOR(255,255,255));
                            Text p1w(100,200,"Player 1");
                            Text p2w(100,200,"Player 2");
                            Text p3w(100,200,"Player 3");
                            p1w.setColor(COLOR(255,0,0));
                            p2w.setColor(COLOR(0,0,255));
                            p3w.setColor(COLOR(238,130,238));
                            w.hide();
                            p1w.hide();
                            p2w.hide();
                            p3w.hide();
                            b=0;
                            x=1;

                            while((c!=0)&&(e!=0))
                            {
                                gx=turt1.getX();
                                gy=turt1.getY();
                                a1.moveTo(gx,gy);
                                gx=turt2.getX();
                                gy=turt2.getY();
                                a2.moveTo(gx,gy);
                                gx=turt3.getX();
                                gy=turt3.getY();
                                a3.moveTo(gx,gy);

                                if(b==0)
                                {
                                    if((p1==p2))
                                    {
                                        if (p2==p3)
                                        {
                                            a1.move(-15,0);
                                            a2.move(0,-15);
                                            a3.move(15,0);
                                            b=1;
                                        }
                                        else
                                        {
                                            a1.move(-15,0);
                                            a2.move(15,0);
                                            b=1;
                                        }
                                    }
                                    else if(p2==p3)
                                    {
                                        a2.move(-15,0);
                                        a3.move(15,0);
                                        b=1;
                                    }
                                    else if(p1==p3)
                                    {
                                        a1.move(-15,0);
                                        a3.move(15,0);
                                        b=1;
                                    }
                                }
                                cl=getClick();
                                if((cl/65536>=1165&&cl/65536<=1366)&&(cl%65536>=668&&cl%65536<=767))
                                {
                                    c=0; exitr.setFill(); wait(0.1);
                                }
                                else if((cl/65536>=1206&&cl/65536<=1326)&&(cl%65536>=358&&cl%65536<=478))
                                {
                                    b=0;
                                    n=diceval();
                                    d_1.hide();
                                    d_3.hide();
                                    d_4.hide();
                                    d_5.hide();
                                    d_6.hide();
                                    d_7.hide();
                                    d_9.hide();
                                    if(n==1)
                                    {
                                        d_5.show();
                                    }
                                    else if(n==2)
                                    {
                                        d_1.show();
                                        d_9.show();
                                    }
                                    else if(n==3)
                                    {
                                        d_1.show();
                                        d_9.show();
                                        d_5.show();
                                    }
                                    else if(n==4)
                                    {
                                        d_1.show();
                                        d_3.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    else if(n==5)
                                    {
                                        d_5.show();
                                        d_1.show();
                                        d_3.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    else if(n==6)
                                    {
                                        d_1.show();
                                        d_3.show();
                                        d_4.show();
                                        d_6.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    for(i=1;i<=n;i++)
                                    {
                                        if(x==1)
                                        {
                                            if(p1==100)
                                            {
                                                turt1.right(90);
                                                d=1;
                                            }
                                            if(p1%10==0)
                                            {
                                                if(p1%20==0)
                                                turt1.right(90);
                                                else
                                                turt1.left(90);
                                            }
                                            if((p1!=1)&&(p1%10==1))
                                            {
                                                if(p1%20==1)
                                                turt1.right(90);
                                                else
                                                turt1.left(90);
                                            }
                                            turt1.forward(70);
                                            gx=turt1.getX();
                                            gy=turt1.getY();
                                            wait(0.1);
                                            a1.moveTo(gx,gy);
                                            if (d==1)
                                            p1--;
                                            else
                                            p1++;
                                        }
                                        if(x==2)
                                        {
                                            if(p2==100)
                                            {
                                                turt2.right(90);
                                                d=2;
                                            }
                                            if(p2%10==0)
                                            {
                                                if(p2%20==0)
                                                turt2.right(90);
                                                else
                                                turt2.left(90);
                                            }
                                            if((p2!=1)&&(p2%10==1))
                                            {
                                                if(p2%20==1)
                                                turt2.right(90);
                                                else
                                                turt2.left(90);
                                            }
                                            turt2.forward(70);
                                            gx=turt2.getX();
                                            gy=turt2.getY();
                                            wait(0.1);
                                            a2.moveTo(gx,gy);
                                            if(d==2)
                                            p2--;
                                            else
                                            p2++;
                                        }
                                        if(x==3)
                                        {
                                            if(p3==100)
                                            {
                                                turt3.right(90);
                                                d=3;
                                            }
                                            if(p3%10==0)
                                            {
                                                if(p3%20==0)
                                                turt3.right(90);
                                                else
                                                turt3.left(90);
                                            }
                                            if((p3!=1)&&(p3%10==1))
                                            {
                                                if(p3%20==1)
                                                turt3.right(90);
                                                else
                                                turt3.left(90);
                                            }
                                            turt3.forward(70);
                                            gx=turt3.getX();
                                            gy=turt3.getY();
                                            wait(0.1);
                                            a3.moveTo(gx,gy);
                                            if(d==3)
                                            p3--;
                                            else
                                            p3++;
                                        }
                                    }
                                    if(p1==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p3t.hide();
                                        p1w.show();
                                        e=0;
                                    }
                                    else if(p2==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p3t.hide();
                                        p2w.show();
                                        e=0;
                                    }
                                    else if(p3==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p3t.hide();
                                        p3w.show();
                                        e=0;
                                    }
                                    else
                                    {
                                        if(d==1)
                                        turt1.left(180);
                                        if(d==2)
                                        turt2.left(180);
                                        if(d==3)
                                        turt3.left(180);
                                        d=0;
                                        if(x==1)
                                        {
                                        	if(p1==18)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=5;
                                            }
                                            if(p1==40)
                                            {
                                            	wait(0.3);
                                            	turt1.right(180);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	p1=15;
                                            }
                                            if(p1==48)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	p1=9;
                                            }
                                            if(p1==76)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(180);
                                            	p1=53;
                                            }
                                            if(p1==94)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	p1=71;
                                            }
                                            if(p1==97)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=78;
                                            }

                                            if(p1==99)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=44;
                                            }

                                            if(p1==7)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(70);
                                            	turt1.left(90);
                                            	turt1.forward(210);
                                            	turt1.left(90);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=33;
                                            }

                                            if(p1==17)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(210);
                                            	turt1.right(90);
                                            	turt1.forward(210);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=41;
                                            }

                                            if(p1==61)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(140);
                                            	turt1.right(90);
                                            	turt1.forward(140);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=83;
                                            }

                                            if(p1==47)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(140);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	turt1.left(180);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=66;
                                            }

                                            if(p1==70)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(210);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=91;
                                            }

                                            x=2;
                                            p1t.hide();
                                            p3t.hide();
                                            p2t.show();
                                        }
                                        else
                                        if(x==2)
                                        {
                                            if(p2==18)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=5;
                                            }
                                            if(p2==40)
                                            {
                                            	wait(0.3);
                                            	turt2.right(180);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	p2=15;
                                            }
                                            if(p2==48)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	p2=9;
                                            }
                                            if(p2==76)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(180);
                                            	p2=53;
                                            }
                                            if(p2==94)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	p2=71;
                                            }
                                            if(p2==97)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=78;
                                            }

                                            if(p2==99)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=44;
                                            }

                                            if(p2==7)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(70);
                                            	turt2.left(90);
                                            	turt2.forward(210);
                                            	turt2.left(90);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=33;
                                            }

                                            if(p2==17)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(210);
                                            	turt2.right(90);
                                            	turt2.forward(210);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=41;
                                            }

                                            if(p2==61)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(140);
                                            	turt2.right(90);
                                            	turt2.forward(140);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=83;
                                            }

                                            if(p2==47)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(140);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	turt2.left(180);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=66;
                                            }

                                            if(p2==70)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(210);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=91;
                                            }

                                            x=3;
                                            p1t.hide();
                                            p2t.hide();
                                            p3t.show();
                                        }
                                        else
                                        {
                                        	if(p3==18)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=5;
                                            }
                                            if(p3==40)
                                            {
                                            	wait(0.3);
                                            	turt3.right(180);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.right(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.right(90);
                                            	p3=15;
                                            }
                                            if(p3==48)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.right(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	p3=9;
                                            }
                                            if(p3==76)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(180);
                                            	p3=53;
                                            }
                                            if(p3==94)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	p3=71;
                                            }
                                            if(p3==97)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.right(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=78;
                                            }

                                            if(p3==99)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=44;
                                            }

                                            if(p3==7)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(70);
                                            	turt3.left(90);
                                            	turt3.forward(210);
                                            	turt3.left(90);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=33;
                                            }

                                            if(p3==17)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(210);
                                            	turt3.right(90);
                                            	turt3.forward(210);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=41;
                                            }

                                            if(p3==61)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(140);
                                            	turt3.right(90);
                                            	turt3.forward(140);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=83;
                                            }

                                            if(p3==47)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(140);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	turt3.left(180);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=66;
                                            }

                                            if(p3==70)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(210);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=91;
                                            }

                                            x=1;
                                            p2t.hide();
                                            p3t.hide();
                                            p1t.show();
                                        }
                                    }
                                }
                            }
                            while(c!=0)
                            {
                                cl=getClick();
                                if((cl/65536>=1165&&cl/65536<=1366)&&(cl%65536>=668&&cl%65536<=767))
                                {
                                    c=0; exitr.setFill(); wait(0.1);
                                }
                            }
                        }
                        if (c==4)
                        {
                            Circle a1(345,675,10);
                            Circle a2(345,675,10);
                            Circle a3(345,675,10);
                            Circle a4(345,675,10);
                            a1.setColor(COLOR(255,0,0));
                            a2.setColor(COLOR(0,0,255));
                            a3.setColor(COLOR(238,130,238));
                            a4.setColor(COLOR(138,43,226));
                            a1.setFill();
                            a2.setFill();
                            a3.setFill();
                            a4.setFill();
                            p1=1;
                            p2=1;
                            p3=1;
                            p4=1;
                            Text turn(1266,100,"Turn");
                            turn.setColor(COLOR(255,255,255));
                            Text p1t(1266,200,"Player 1");
                            Text p2t(1266,200,"Player 2");
                            Text p3t(1266,200,"Player 3");
                            Text p4t(1266,200,"Player 4");
                            p1t.setColor(COLOR(255,0,0));
                            p2t.setColor(COLOR(0,0,255));
                            p3t.setColor(COLOR(238,130,238));
                            p4t.setColor(COLOR(138,43,226));
                            p2t.hide();
                            p3t.hide();
                            p4t.hide();
                            Text w(100,100,"Winner");
                            w.setColor(COLOR(255,255,255));
                            Text p1w(100,200,"Player 1");
                            Text p2w(100,200,"Player 2");
                            Text p3w(100,200,"Player 3");
                            Text p4w(100,200,"Player 3");
                            p1w.setColor(COLOR(255,0,0));
                            p2w.setColor(COLOR(0,0,255));
                            p3w.setColor(COLOR(238,130,238));
                            p4w.setColor(COLOR(138,43,226));
                            w.hide();
                            p1w.hide();
                            p2w.hide();
                            p3w.hide();
                            p4w.hide();
                            b=0;
                            x=1;

                            while((c!=0)&&(e!=0))
                            {
                                gx=turt1.getX();
                                gy=turt1.getY();
                                a1.moveTo(gx,gy);
                                gx=turt2.getX();
                                gy=turt2.getY();
                                a2.moveTo(gx,gy);
                                gx=turt3.getX();
                                gy=turt3.getY();
                                a3.moveTo(gx,gy);
                                gx=turt4.getX();
                                gy=turt4.getY();
                                a4.moveTo(gx,gy);

                                if(b==0)
                                {
                                    if((p1==p2))
                                    {
                                        if (p2==p3)
                                        {
                                            if(p3==p4)
                                            {
                                                a1.move(-20,-20);
                                                a2.move(20,-20);
                                                a3.move(-20,5);
                                                a4.move(20,5);
                                                b=1;
                                            }
                                            else
                                            {
                                                a1.move(-15,0);
                                                a2.move(0,-15);
                                                a3.move(15,0);
                                                b=1;
                                            }
                                        }
                                        else
                                        {
                                            a1.move(-15,0);
                                            a2.move(15,0);
                                            b=1;
                                        }
                                    }
                                    else if(p2==p3)
                                    {
                                        if(p3==p4)
                                        {
                                            a2.move(-15,0);
                                            a3.move(0,-15);
                                            a4.move(15,0);
                                            b=1;
                                        }
                                        else
                                        {
                                            a2.move(-15,0);
                                            a3.move(15,0);
                                            b=1;
                                        }
                                    }
                                    else if(p3==p4)
                                    {
                                        if(p3==p1)
                                        {   a1.move(-15,0);
                                            a3.move(0,-15);
                                            a4.move(15,0);
                                            b=1;
                                        }
                                        else
                                        {
                                            a3.move(-15,0);
                                            a4.move(15,0);
                                            b=1;
                                        }
                                    }
                                    else if(p1==p3)
                                    {
                                        a1.move(-15,0);
                                        a3.move(15,0);
                                        b=1;
                                    }
                                    else if(p1==p4)
                                    {
                                        a1.move(-15,0);
                                        a4.move(15,0);
                                        b=1;
                                    }
                                    else if(p2==p4)
                                    {
                                        a2.move(-15,0);
                                        a4.move(15,0);
                                        b=1;
                                    }


                                }
                                cl=getClick();
                                if((cl/65536>=1165&&cl/65536<=1366)&&(cl%65536>=668&&cl%65536<=767))
                                {
                                    c=0; exitr.setFill(); wait(0.1);
                                }
                                else if((cl/65536>=1206&&cl/65536<=1326)&&(cl%65536>=358&&cl%65536<=478))
                                {
                                    b=0;
                                    n=diceval();
                                    d_1.hide();
                                    d_3.hide();
                                    d_4.hide();
                                    d_5.hide();
                                    d_6.hide();
                                    d_7.hide();
                                    d_9.hide();
                                    if(n==1)
                                    {
                                        d_5.show();
                                    }
                                    else if(n==2)
                                    {
                                        d_1.show();
                                        d_9.show();
                                    }
                                    else if(n==3)
                                    {
                                        d_1.show();
                                        d_9.show();
                                        d_5.show();
                                    }
                                    else if(n==4)
                                    {
                                        d_1.show();
                                        d_3.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    else if(n==5)
                                    {
                                        d_5.show();
                                        d_1.show();
                                        d_3.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    else if(n==6)
                                    {
                                        d_1.show();
                                        d_3.show();
                                        d_4.show();
                                        d_6.show();
                                        d_7.show();
                                        d_9.show();
                                    }
                                    for(i=1;i<=n;i++)
                                    {
                                        if(x==1)
                                        {
                                            if(p1==100)
                                            {
                                                turt1.right(90);
                                                d=1;
                                            }
                                            if(p1%10==0)
                                            {
                                                if(p1%20==0)
                                                turt1.right(90);
                                                else
                                                turt1.left(90);
                                            }
                                            if((p1!=1)&&(p1%10==1))
                                            {
                                                if(p1%20==1)
                                                turt1.right(90);
                                                else
                                                turt1.left(90);
                                            }
                                            turt1.forward(70);
                                            gx=turt1.getX();
                                            gy=turt1.getY();
                                            wait(0.1);
                                            a1.moveTo(gx,gy);
                                            if (d==1)
                                            p1--;
                                            else
                                            p1++;
                                        }
                                        if(x==2)
                                        {
                                            if(p2==100)
                                            {
                                                turt2.right(90);
                                                d=2;
                                            }
                                            if(p2%10==0)
                                            {
                                                if(p2%20==0)
                                                turt2.right(90);
                                                else
                                                turt2.left(90);
                                            }
                                            if((p2!=1)&&(p2%10==1))
                                            {
                                                if(p2%20==1)
                                                turt2.right(90);
                                                else
                                                turt2.left(90);
                                            }
                                            turt2.forward(70);
                                            gx=turt2.getX();
                                            gy=turt2.getY();
                                            wait(0.1);
                                            a2.moveTo(gx,gy);
                                            if(d==2)
                                            p2--;
                                            else
                                            p2++;
                                        }
                                        if(x==3)
                                        {
                                            if(p3==100)
                                            {
                                                turt3.right(90);
                                                d=3;
                                            }
                                            if(p3%10==0)
                                            {
                                                if(p3%20==0)
                                                turt3.right(90);
                                                else
                                                turt3.left(90);
                                            }
                                            if((p3!=1)&&(p3%10==1))
                                            {
                                                if(p3%20==1)
                                                turt3.right(90);
                                                else
                                                turt3.left(90);
                                            }
                                            turt3.forward(70);
                                            gx=turt3.getX();
                                            gy=turt3.getY();
                                            wait(0.1);
                                            a3.moveTo(gx,gy);
                                            if(d==3)
                                            p3--;
                                            else
                                            p3++;
                                        }
                                        if(x==4)
                                        {
                                            if(p4==100)
                                            {
                                                turt4.right(90);
                                                d=4;
                                            }
                                            if(p4%10==0)
                                            {
                                                if(p4%20==0)
                                                turt4.right(90);
                                                else
                                                turt4.left(90);
                                            }
                                            if((p4!=1)&&(p4%10==1))
                                            {
                                                if(p4%20==1)
                                                turt4.right(90);
                                                else
                                                turt4.left(90);
                                            }
                                            turt4.forward(70);
                                            gx=turt4.getX();
                                            gy=turt4.getY();
                                            wait(0.1);
                                            a4.moveTo(gx,gy);
                                            if(d==4)
                                            p4--;
                                            else
                                            p4++;
                                        }
                                    }
                                    if(p1==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p3t.hide();
                                        p4t.hide();
                                        p1w.show();
                                        e=0;
                                    }
                                    else if(p2==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p3t.hide();
                                        p4t.hide();
                                        p2w.show();
                                        e=0;
                                    }
                                    else if(p3==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p3t.hide();
                                        p4t.hide();
                                        p3w.show();
                                        e=0;
                                    }
                                    else if(p4==100)
                                    {
                                        w.show();
                                        turn.hide();
                                        p1t.hide();
                                        p2t.hide();
                                        p3t.hide();
                                        p4t.hide();
                                        p4w.show();
                                        e=0;
                                    }
                                    else
                                    {
                                        if(d==1)
                                        turt1.left(180);
                                        if(d==2)
                                        turt2.left(180);
                                        if(d==3)
                                        turt3.left(180);
                                        if(d==4)
                                        turt4.left(180);
                                        d=0;
                                        if(x==1)
                                        {
                                        	if(p1==18)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=5;
                                            }
                                            if(p1==40)
                                            {
                                            	wait(0.3);
                                            	turt1.right(180);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	p1=15;
                                            }
                                            if(p1==48)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	p1=9;
                                            }
                                            if(p1==76)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(180);
                                            	p1=53;
                                            }
                                            if(p1==94)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	p1=71;
                                            }
                                            if(p1==97)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.right(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=78;
                                            }

                                            if(p1==99)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	turt1.forward(70);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=44;
                                            }

                                            if(p1==7)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(70);
                                            	turt1.left(90);
                                            	turt1.forward(210);
                                            	turt1.left(90);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=33;
                                            }

                                            if(p1==17)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(210);
                                            	turt1.right(90);
                                            	turt1.forward(210);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=41;
                                            }

                                            if(p1==61)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(140);
                                            	turt1.right(90);
                                            	turt1.forward(140);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=83;
                                            }

                                            if(p1==47)
                                            {
                                            	wait(0.3);
                                            	turt1.left(90);
                                            	turt1.forward(140);
                                            	turt1.left(90);
                                            	turt1.forward(70);
                                            	turt1.left(180);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=66;
                                            }

                                            if(p1==70)
                                            {
                                            	wait(0.3);
                                            	turt1.forward(210);
                                            	gx=turt1.getX();
                                            	gy=turt1.getY();
                                            	a1.moveTo(gx,gy);
                                            	p1=91;
                                            }

                                            x=2;
                                            p1t.hide();
                                            p3t.hide();
                                            p4t.hide();
                                            p2t.show();
                                        }
                                        else if(x==2)
                                        {
                                        	if(p2==18)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=5;
                                            }
                                            if(p2==40)
                                            {
                                            	wait(0.3);
                                            	turt2.right(180);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	p2=15;
                                            }
                                            if(p2==48)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	p2=9;
                                            }
                                            if(p2==76)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(180);
                                            	p2=53;
                                            }
                                            if(p2==94)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	p2=71;
                                            }
                                            if(p2==97)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.right(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=78;
                                            }

                                            if(p2==99)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	turt2.forward(70);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=44;
                                            }

                                            if(p2==7)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(70);
                                            	turt2.left(90);
                                            	turt2.forward(210);
                                            	turt2.left(90);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=33;
                                            }

                                            if(p2==17)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(210);
                                            	turt2.right(90);
                                            	turt2.forward(210);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=41;
                                            }

                                            if(p2==61)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(140);
                                            	turt2.right(90);
                                            	turt2.forward(140);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=83;
                                            }

                                            if(p2==47)
                                            {
                                            	wait(0.3);
                                            	turt2.left(90);
                                            	turt2.forward(140);
                                            	turt2.left(90);
                                            	turt2.forward(70);
                                            	turt2.left(180);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=66;
                                            }

                                            if(p2==70)
                                            {
                                            	wait(0.3);
                                            	turt2.forward(210);
                                            	gx=turt2.getX();
                                            	gy=turt2.getY();
                                            	a2.moveTo(gx,gy);
                                            	p2=91;
                                            }

                                            x=3;
                                            p1t.hide();
                                            p2t.hide();
                                            p4t.hide();
                                            p3t.show();
                                        }
                                        else if(x==3)
                                        {
                                        	if(p3==18)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=5;
                                            }
                                            if(p3==40)
                                            {
                                            	wait(0.3);
                                            	turt3.right(180);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.right(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.right(90);
                                            	p3=15;
                                            }
                                            if(p3==48)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.right(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	p3=9;
                                            }
                                            if(p3==76)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(180);
                                            	p3=53;
                                            }
                                            if(p3==94)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	p3=71;
                                            }
                                            if(p3==97)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.right(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=78;
                                            }

                                            if(p3==99)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	turt3.forward(70);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=44;
                                            }

                                            if(p3==7)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(70);
                                            	turt3.left(90);
                                            	turt3.forward(210);
                                            	turt3.left(90);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=33;
                                            }

                                            if(p3==17)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(210);
                                            	turt3.right(90);
                                            	turt3.forward(210);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=41;
                                            }

                                            if(p3==61)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(140);
                                            	turt3.right(90);
                                            	turt3.forward(140);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=83;
                                            }

                                            if(p3==47)
                                            {
                                            	wait(0.3);
                                            	turt3.left(90);
                                            	turt3.forward(140);
                                            	turt3.left(90);
                                            	turt3.forward(70);
                                            	turt3.left(180);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=66;
                                            }

                                            if(p3==70)
                                            {
                                            	wait(0.3);
                                            	turt3.forward(210);
                                            	gx=turt3.getX();
                                            	gy=turt3.getY();
                                            	a3.moveTo(gx,gy);
                                            	p3=91;
                                            }

                                            x=4;
                                            p1t.hide();
                                            p2t.hide();
                                            p3t.hide();
                                            p4t.show();
                                        }
                                        else
                                        {
                                        	if(p4==18)
                                            {
                                            	wait(0.3);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	p4=5;
                                            }
                                            if(p4==40)
                                            {
                                            	wait(0.3);
                                            	turt4.right(180);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.right(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.right(90);
                                            	p4=15;
                                            }
                                            if(p4==48)
                                            {
                                            	wait(0.3);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.right(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.left(90);
                                            	p4=9;
                                            }
                                            if(p4==76)
                                            {
                                            	wait(0.3);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.left(180);
                                            	p4=53;
                                            }
                                            if(p4==94)
                                            {
                                            	wait(0.3);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.left(90);
                                            	p4=71;
                                            }
                                            if(p4==97)
                                            {
                                            	wait(0.3);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.right(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	p4=78;
                                            }

                                            if(p4==99)
                                            {
                                            	wait(0.3);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	turt4.forward(70);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	p4=44;
                                            }

                                            if(p4==7)
                                            {
                                            	wait(0.3);
                                            	turt4.forward(70);
                                            	turt4.left(90);
                                            	turt4.forward(210);
                                            	turt4.left(90);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	p4=33;
                                            }

                                            if(p4==17)
                                            {
                                            	wait(0.3);
                                            	turt4.forward(210);
                                            	turt4.right(90);
                                            	turt4.forward(210);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	p4=41;
                                            }

                                            if(p4==61)
                                            {
                                            	wait(0.3);
                                            	turt4.forward(140);
                                            	turt4.right(90);
                                            	turt4.forward(140);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	p4=83;
                                            }

                                            if(p4==47)
                                            {
                                            	wait(0.3);
                                            	turt4.left(90);
                                            	turt4.forward(140);
                                            	turt4.left(90);
                                            	turt4.forward(70);
                                            	turt4.left(180);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	p4=66;
                                            }

                                            if(p4==70)
                                            {
                                            	wait(0.3);
                                            	turt4.forward(210);
                                            	gx=turt4.getX();
                                            	gy=turt4.getY();
                                            	a4.moveTo(gx,gy);
                                            	p4=91;
                                            }

                                            x=1;
                                            p2t.hide();
                                            p3t.hide();
                                            p4t.hide();
                                            p1t.show();
                                        }
                                    }
                                }
                            }
                            while(c!=0)
                            {
                                cl=getClick();
                                if((cl/65536>=1165&&cl/65536<=1366)&&(cl%65536>=668&&cl%65536<=767))
                                {
                                    c=0; exitr.setFill(); wait(0.1);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
