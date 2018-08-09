#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define dx 15
#define dy 25

void *currentfont;
int window;
GLfloat x[25];
GLfloat y[20];
GLint i,j,k;
int i=0;
int w,h;
void setFont(void *font)
{
	currentfont=font;
}
void drawstring(float x,float y,float z,char *string)
{
	    char *c;
	glRasterPos3f(x,y,z);
 
	for(c=string;*c!='\0';c++)
	{	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		glutBitmapCharacter(currentfont,*c);
	}
}
void text(void)											// to draw the text in menu screen
{

	
	glClearColor(0.1019607843,0.2452941176,0.2509803922,0.0);
	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,1.0,1.0);
	drawstring(95.0,455.0,1.0,"*  *  *  *  *  *  *  *  *  S E L E C T I V E     R E P E A T      A R Q  *  *  *  *  *  *  *  *  *");

	glColor3f(1.0,1.0,1.0);
	drawstring(210.0,405.0,1.0,"SEND  WINDOW");				

	glColor3f(1.0,1.0,1.0);
	drawstring(200.0,350.0,1.0," RECEIVE  WINDOW");

	glColor3f(1.0,1.0,1.0);
	drawstring(210.0,295.0,1.0,"SAFE  SENDING");

	glColor3f(1.0,1.0,1.0);
	drawstring(200.0,240.0,1.0,"PACKET  CRASHING");

	glColor3f(1.0,1.0,1.0);
	drawstring(215.0,185.0,1.0," TIME  OUT");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(225.0,130.0,1.0,"  EXIT");
	glFlush();
}


void draw() // TO DRAW POLYGON FOR DISPLAY MENUS 
{

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);// button container ka shadow
	glColor4d(0.223529,0.243137,0.274509,0.8);
    glVertex2i(350,130);
	glVertex2i(170,130);
	glVertex2i(150,110);
    glVertex2i(330,110);
	glEnd();
	glFlush();

    glBegin(GL_POLYGON);// button container
	glColor4d(0.8941176471,0.9294117647,0.8588235294,0.25);
    glVertex2i(330,435);
	glVertex2i(150,435);
	glVertex2i(150,110);
    glVertex2i(330,110);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // send window ka shadow
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(315,405);
	glVertex2i(195,405);
	glVertex2i(180,395);
    glVertex2i(305,395);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // send window
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(305,425);
	glVertex2i(180,425);
	glVertex2i(180,395);
    glVertex2i(305,395);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // recieve window ka shadow
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(315,355);
	glVertex2i(195,355);
	glVertex2i(180,340);
    glVertex2i(305,340);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // recieve window
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(305,370);
	glVertex2i(180,370);
	glVertex2i(180,340);
    glVertex2i(305,340);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // safe window ka shadow
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(315,300);
	glVertex2i(195,300);
	glVertex2i(180,285);
    glVertex2i(305,285);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // safe sending
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(305,315);
	glVertex2i(180,315);
	glVertex2i(180,285);
    glVertex2i(305,285);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  //  packet crashing ka shadow
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(315,245);
	glVertex2i(195,245);
	glVertex2i(180,230);
    glVertex2i(305,230);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // packet crashing
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(305,260);
	glVertex2i(180,260);
	glVertex2i(180,230);
    glVertex2i(305,230);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // time out ka shadow
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(315,190);
	glVertex2i(195,190);
	glVertex2i(180,175);
    glVertex2i(305,175);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // time out
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(305,205);
	glVertex2i(180,205);
	glVertex2i(180,175);
    glVertex2i(305,175);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // Exit ka shadow
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(315,135);
	glVertex2i(195,135);
	glVertex2i(180,120);
    glVertex2i(305,120);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // exit
	glColor4d(0.223529,0.243137,0.274509,0.7);
    glVertex2i(305,150);
	glVertex2i(180,150);
	glVertex2i(180,120);
    glVertex2i(305,120);
	glEnd();
	glFlush();

}
		

void myInit()
{
	//rgb(26, 60, 64)
    glClearColor(0.1019607843,0.2452941176,0.2509803922,0.0);// 0.223529,0.243137,0.274509 20/255,77/255,83/255
	//glClearColor(0.0,0.0,0.0,1.0);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glPointSize(5.0);
	gluOrtho2D(0.0,500.0,0.0,500.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	setFont(GLUT_BITMAP_HELVETICA_18);
	
}

void computer()									// to draw the sender and receiver computers
{

	
	glColor3f(1.0,1.0,1.0);//monitor
	glBegin(GL_POLYGON);
	glVertex2f(85,380);
	glVertex2f(85,440);
	glVertex2f(150,440);
	glVertex2f(150,380);
	glEnd();
	glFlush();


	glColor3f(0.0,0.0,0.0);//monitor
	glBegin(GL_POLYGON);
	glVertex2f(87,382);
	glVertex2f(87,438);
	glVertex2f(148,438);
	glVertex2f(148,382);
	glEnd();
	glFlush();

	glColor3f(0.8,0.8,0.8);//vertical stand
	glBegin(GL_LINES);
	glVertex2f(105,380);
	glVertex2f(105,375);
	glVertex2f(129,380);
	glVertex2f(129,375);
	glEnd();
	glFlush();

	glColor3f(0.8,0.8,0.8); //horizontal stand
	glBegin(GL_QUADS);
	glVertex2f(98,370);
	glVertex2f(98,375);
	glVertex2f(138,375);
	glVertex2f(138,370);
	glEnd();
	glFlush();


	glColor3f(0.8,0.8,0.8);  //CPU
	glBegin(GL_LINE_LOOP);
	glVertex2f(80,350);
	glVertex2f(80,370);
	glVertex2f(155,370);
	glVertex2f(155,350);
	glEnd();
	glFlush();


	glColor3f(0.8,0.8,0.8);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(95,360);
	glVertex2f(95,365);
	glVertex2f(115,365);
	glVertex2f(115,360);
	glEnd();
	glFlush();



	glColor3f(0.8,0.8,0.8);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(132,358);
	glVertex2f(132,361);
	glVertex2f(140,361);
	glVertex2f(140,358);
	glEnd();
	glFlush(); 


	glColor3f(0.7,0.7,0.7);//keyboard outline
	glBegin(GL_LINE_LOOP);
	glVertex2f(77,325);
	glVertex2f(87,350);
	glVertex2f(148,350);
	glVertex2f(158,325);
	glEnd();
	glFlush();


	glColor3f(0.7,0.7,0.7);//keyboard outline
	glBegin(GL_POLYGON);
	glVertex2f(77,325);
	glVertex2f(158,325);
	glVertex2f(158,322);
	glVertex2f(77,322);
	glEnd();
	glFlush();


	glColor3f(0.7,0.7,0.7); //horizontal lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(85,345);
	glVertex2f(150,345);
	glVertex2f(83,340);
	glVertex2f(152,340);
	glVertex2f(81,335);
	glVertex2f(154,335);
	glVertex2f(79,330);
	glVertex2f(156,330);
	glVertex2f(77,325);
	glVertex2f(158,325);
	glEnd();
	glFlush();



    glColor3f(0.7,0.7,0.7); //vertical lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(89,322);
	glVertex2f(97,350);
	glVertex2f(103,322);
	glVertex2f(107,350);
	glVertex2f(117,322);
	glVertex2f(117,350);
	glVertex2f(131,322);
	glVertex2f(127,350);
	glVertex2f(145,322);
	glVertex2f(137,350);
	glEnd();
	glFlush();

	// COMPUTER AT RECEIVER

	glColor3f(1.0,1.0,1.0);//monitior
	glBegin(GL_POLYGON);
	glVertex2f(335,380);
	glVertex2f(335,440);
	glVertex2f(400,440);
	glVertex2f(400,380);
	glEnd();
	glFlush();


	glColor3f(0.0,0.0,0.0);//monitior
	glBegin(GL_POLYGON);
	glVertex2f(337,382);
	glVertex2f(337,438);
	glVertex2f(398,438);
	glVertex2f(398,382);
	glEnd();
	glFlush();

	
	glColor3f(0.8,0.8,0.8);//ver
	glBegin(GL_LINES);
	glVertex2f(355,380);
	glVertex2f(355,375);
	glVertex2f(379,380);
	glVertex2f(379,375);
	glEnd();
	glFlush();

	glColor3f(0.8,0.8,0.8);//hor
	glBegin(GL_QUADS);
	glVertex2f(348,370);
	glVertex2f(348,375);
	glVertex2f(388,375);
	glVertex2f(388,370);
	glEnd();
	glFlush();


	glColor3f(0.8,0.8,0.8);//CPU
	glBegin(GL_LINE_LOOP);
	glVertex2f(330,350);
	glVertex2f(330,370);
	glVertex2f(405,370);
	glVertex2f(405,350);
	glEnd();
	glFlush();

	
	glColor3f(0.8,0.8,0.8);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(345,360);
	glVertex2f(345,365);
	glVertex2f(365,365);
	glVertex2f(365,360);
	glEnd();
	glFlush();



	glColor3f(0.8,0.8,0.8);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(382,358);
	glVertex2f(382,361);
	glVertex2f(390,361);
	glVertex2f(390,358);
	glEnd();
	glFlush(); 

	glColor3f(0.7,0.7,0.7);//keyboard
	glBegin(GL_LINE_LOOP);
	glVertex2f(327,322);
	glVertex2f(337,350);
	glVertex2f(398,350);
	glVertex2f(408,322);
	glEnd();
	glFlush();

	glColor3f(0.7,0.7,0.7);//keyboard
	glBegin(GL_POLYGON);
	glVertex2f(327,325);
	glVertex2f(408,325);
	glVertex2f(408,322);
	glVertex2f(327,322);
	glEnd();
	glFlush();



	glColor3f(0.8,0.8,0.8); //horizontal lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(335,345);
	glVertex2f(400,345);
	glVertex2f(333,340);
	glVertex2f(402,340);
	glVertex2f(331,335);
	glVertex2f(404,335);
	glVertex2f(329,330);
	glVertex2f(406,330);
	glVertex2f(327,325);
	glVertex2f(408,325);
	glEnd();
	glFlush();



    glColor3f(0.8,0.8,0.8); //vertical lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(339,322);
	glVertex2f(347,350);
	glVertex2f(353,322);
	glVertex2f(357,350);
	glVertex2f(367,322);
	glVertex2f(367,350);
	glVertex2f(381,322);
	glVertex2f(377,350);
	glVertex2f(395,322);
	glVertex2f(387,350);
	glEnd();
	glFlush();



	// glColor3f(0.8,0.8,0.8);//connectin wire
	// glBegin(GL_LINES);
	// glVertex2f(155,360);
	// glVertex2f(330,360);
	// glEnd();
	// glFlush();


	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(410,425);
	glVertex2f(410,430);
	glVertex2f(425,430);
	glVertex2f(425,425);
	glEnd();
	glFlush();

	setFont(GLUT_BITMAP_HELVETICA_12);
    glColor3f(1.0,1.0,1.0);
	drawstring(432.0,425.5,1.0,"DATA FRAMES");				
	glFlush();

	glColor3f(0.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(410,410);
	glVertex2f(410,415);
	glVertex2f(420,415);
	glVertex2f(420,410);
	glEnd();
	glFlush();

    glColor3f(1.0,1.0,1.0);
	drawstring(432.0,410.5,1.0,"ACK ");				
	glFlush();

	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(410,395);
	glVertex2f(410,400);
	glVertex2f(420,400);
	glVertex2f(420,395);
	glEnd();
	glFlush();

    glColor3f(1.0,1.0,1.0);
	drawstring(432.0,395.5,1.0,"NAK");				
	glFlush();

glColor3f(1.0f,1.0f,1.0f);
	setFont(GLUT_BITMAP_HELVETICA_12);
 	drawstring(95.0,420.0,1.0,"SENDER");

	glColor3f(1.0f,1.0f,1.0f);
 	drawstring(345.0,420.0,1.0,"RECEIVER");
}

void drawPipe()
{
	glColor3d(0.82352941176,0.82352941176,0.82352941176);
	drawstring(180.0,200.0,1.0,"TRANSMISSION MEDIUM");
	
	glColor3d(0.82352941176,0.82352941176,0.82352941176);
	//glColor3d(0.07843137254,0.07843137254,0.07843137254);
	glBegin(GL_LINES);
	glVertex2f(170.0,154.0);
	glVertex2f(280.0,154.0);
	glEnd();
	glFlush();
	//glColor3d(0.83921568627,0.83921568627,0.83921568627);
	glBegin(GL_LINES);
	glVertex2f(280.0,190.0);
	glVertex2f(170.0,190.0);
	glEnd();
	glFlush();
	//glColor3d(0.83921568627,0.83921568627,0.83921568627);
	double x,y;
	int a=5,b=18,h=170,k=172;
	glBegin(GL_LINE_LOOP);
	for(double t=0;t<6.28318530718;t+=0.01)
	{
		x = h+a*cos(t);
		y = k+b*sin(t);
		glVertex2d(x,y);

	}
	glEnd();
	glFlush();

	h=280;k=172;
	glBegin(GL_LINE_LOOP);
	for(double t=0;t<6.28318530718;t+=0.01)
	{
		x = h+a*cos(t);
		y = k+b*sin(t);
		glVertex2d(x,y);

	}
	glEnd();
	glFlush();

}


void slide(GLint maxx,GLint maxy,GLfloat x0,GLfloat y0) // TO DRAW WINDOWS (Rectangular Mesh)
{   
	for(i=0;i<maxx;i++)
		x[i]=x0+i*dx;

	for(j=0;j<maxy;j++)
		y[j]=y0+j*dy;

	for(i=0;i<maxx-1;i++)
		for(j=0;j<maxy-1;j++)
		{
		
	       glBegin(GL_LINE_LOOP);
		   glVertex2f(x[i],y[j]);
		   glVertex2f(x[i],y[j+1]);
		   glVertex2f(x[i+1],y[j+1]);
		   glVertex2f(x[i+1],y[j]);
		   glEnd();
		   glFlush();
		
		
		}
}


   
void delay()
{
  j=28000;
	while(j!=0)
	{
		j--;
		i=28000;
		while(i!=0)
		{
			i--;
			
		}
	}


}




void timer0()						
{
	glColor3f(1.4,1.9,0.78);
    glBegin(GL_LINE_LOOP);         // timer for frame 0
		glVertex2f(100,120);
	    glVertex2f(100,130);
		glVertex2f(225,130);
		glVertex2f(225,120);
    glEnd();
	glFlush();
}

void timer1()
{
	
	glColor3f(1.4,1.9,0.78);
    glBegin(GL_LINE_LOOP);         // timer for frame 1
		glVertex2f(100,100);
	    glVertex2f(100,110);
		glVertex2f(225,110);
		glVertex2f(225,100);
    glEnd();
	glFlush();

	
}

void timer2()
{
	glColor3f(1.4,1.9,0.78);
    glBegin(GL_LINE_LOOP);         // timer for frame 2
		glVertex2f(100,80);
	    glVertex2f(100,90);
		glVertex2f(225,90);
		glVertex2f(225,80);
    glEnd();
	glFlush();
}

void timer3()
{
	glColor3f(1.4,1.9,0.78);
    glBegin(GL_LINE_LOOP);         // timer for frame 3
		glVertex2f(360,120);
	    glVertex2f(360,130);
		glVertex2f(485,130);
		glVertex2f(485,120);
    glEnd();
	glFlush();
}

void timer4()
{
	glColor3f(1.4,1.9,0.78);
    glBegin(GL_LINE_LOOP);         // timer for frame 4
		glVertex2f(360,100);
	    glVertex2f(360,110);
		glVertex2f(485,110);
		glVertex2f(485,100);
    glEnd();
	glFlush();
}


void timer(float k,float l,float m,float n)
{
glColor3f(1.4,1.9,0.78);
    glBegin(GL_POLYGON);         // to call timer functions
		glVertex2f(l,m);
	    glVertex2f(l,n);
		glVertex2f(l+k,n);
		glVertex2f(l+k,m);
    glEnd();
	glFlush();

}



void title()												// to draw the starting screen
{
	glClearColor(0.1019607843,0.2452941176,0.2509803922,0.0);	
	setFont(GLUT_BITMAP_HELVETICA_18);

	glColor3d(0.96470588235,0.44705882352,0.50196078431);
	drawstring(170.0,475.0,1.0,"JSS ACADEMY OF TECHNICAL EDUCATION");
	glColor3d(0.96470588235,0.44705882352,0.50196078431);
	drawstring(150.0,455.0,1.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3d(0.96470588235,0.44705882352,0.50196078431);
	drawstring(165.0,435.0,1.0,"COMPUTER GRAPHICS MINI PROJECT ( 15CSL68 )");

	glColor3f(1.0,1.0,1.0);
	drawstring(70.0,405.0,1.0,"*  * G R A P H I C A L   I L L U S T R A T I O N   OF   S E L E C T I V E   R E P E A T    A R Q   P R O T O C O L *  *");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(210.0,365.0,1.0,"SUBMITTED   BY");				
	
	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,340.0,1.0,"JAYESH KUMAR (1JS15CS044)");
	
	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,320.0,1.0,"HARSH TOMAR (1JS15CS042)");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(190.0,260.0,1.0,"UNDER THE GUIDANCE OF");

	glColor3f(0.0,1.0,1.0);
	drawstring(200.0,230.0,1.0," MAHESH KUMAR MR ");
	setFont(GLUT_BITMAP_HELVETICA_12);

	//glColor3f(0.0,1.0,1.0);
	//drawstring(360.0,230.0,1.0,"B.E, M.tech,");		
	
	glColor3f(0.0,1.0,1.0);
	drawstring(210.0,215.0,1.0,"Asst Prof, Dept of CS&E");

	glColor3f(0.0,1.0,1.0);
	drawstring(210.0,200.0,1.0,"JSSATE ");

    
	glFlush();
}



void move1()  //MOVEMENT OF FRAME 0  (in safe sending)
{

	float i,j,temp=0.3;

    glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(30.0,125.0,1.0," Timer 0");

	timer0();
	float k=0;

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0f,1.0f,0.0f);
    drawstring(160.0,370.0,1.0,"FRAME 0 sending ...........");

	drawPipe();
	
   for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(55,265-j);glVertex2i(55,280-j);glVertex2i(60,280-j);glVertex2i(60,265-j);
    glEnd();
    glFlush();

		
	 //glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);  // to remove traces create movement of frame in green background
		 glBegin(GL_QUADS);
	  glVertex2i(55,265-j);glVertex2i(55,280-j);glVertex2i(60,280-j);glVertex2i(60,265-j);
    glEnd();
    glFlush();
	 }

    
	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(55,238-j);glVertex2i(55,253-j);glVertex2i(60,253-j);glVertex2i(60,238-j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,102.5,122,128);

	
	 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(55,238-j);glVertex2i(55,253-j);glVertex2i(60,253-j);glVertex2i(60,238-j);
    glEnd();
    glFlush();
	 }

	
 for(i=0;i<231;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(60+i,178);glVertex2i(60+i,183);glVertex2i(75+i,183);glVertex2i(75+i,178);
    glEnd();
    glFlush();
	drawPipe();

	k+=0.05;
	timer(k,102.5,122,128);

	
   //glColor3d(0.1019607843,0.2452941176,0.2509803922);
   glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(60+i,178);glVertex2i(60+i,183);glVertex2i(75+i,183);glVertex2i(75+i,178);
    glEnd();
    glFlush();
 }

  


for(j=0;j<60;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,0,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(305,178+j);glVertex2i(305,193+j);glVertex2i(310,193+j);glVertex2i(310,178+j);
    glEnd();
    glFlush();
	
	k+=0.05;
	timer(k,102.5,122,128);

	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(305,178+j);glVertex2i(305,193+j);glVertex2i(310,193+j);glVertex2i(310,178+j);
    glEnd();
      glFlush(); 

	}

	drawPipe();
   
	setFont(GLUT_BITMAP_HELVETICA_12);
	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 0 sending ...........");

    glColor3f(1.0,1.0,0.0);
    drawstring(160.0,370.0,1.0,"FRAME 0 sent");

   // delay();
	
	setFont(GLUT_BITMAP_HELVETICA_12);
	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 0 sent"); 

}
	


void move2()   // SIMULTANEOUS  MOVEMENT OF ACK 1 AND FRAME 1(in safe sending)
{

	
	float i,j,temp=0.3;

	setFont(GLUT_BITMAP_HELVETICA_18);
	
	glColor3f(1.0,0.8,0.4);
	drawstring(30.0,105.0,1.0," Timer 1");


	setFont(GLUT_BITMAP_HELVETICA_12);
	
    glColor3f(1.0f,1.0f,0.0f);
    drawstring(160.0,370.0,1.0,"FRAME 1 sending ...........");

    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"........... sending ACK1 ");

	timer1();
	
	
	
   float k=0,l=0;

     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	{   glColor3f(0,1,1);
			glBegin(GL_QUADS);
		glVertex2i(320,265-j);glVertex2i(320,275-j);glVertex2i(325,275-j);glVertex2i(325,265-j);
		glEnd();
		glFlush();

		glColor3f(1,0,0);
			glBegin(GL_QUADS);
		glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
		glEnd();
		glFlush();

		//glColor3d(0.1019607843,0.2452941176,0.2509803922);
		glColor3d(0.1019607843,0.2452941176,0.2509803922);
			glBegin(GL_QUADS);
		glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
		glEnd();
		glFlush();


		//glColor3d(0.1019607843,0.2452941176,0.2509803922);
		glColor3d(0.1019607843,0.2452941176,0.2509803922);   // to remove traces create movement of frame in black
			glBegin(GL_QUADS);
		glVertex2i(320,265-j);glVertex2i(320,275-j);glVertex2i(325,275-j);glVertex2i(325,265-j);
		glEnd();
		glFlush();
	 }



	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(320,228-j);glVertex2i(320,238-j);glVertex2i(325,238-j);glVertex2i(325,228-j);
    glEnd();
    glFlush();

	 glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();


    k+=0.05;
	timer(k,156.5,122,128);
	timer(k,102.5,102,108);

    

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(320,228-j);glVertex2i(320,238-j);glVertex2i(325,238-j);glVertex2i(325,228-j);
    glEnd();
    glFlush();

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();

	
	 } 
drawPipe();
for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(310-i,168);glVertex2i(310-i,173);glVertex2i(320-i,173);glVertex2i(320-i,168);
    glEnd();
    glFlush();
	 

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();
	 

	k+=0.05;
	timer(k,156.5,122,128);
	timer(k,102.5,102,108);

 
	
    //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glBegin(GL_QUADS);
	glVertex2i(310-i,168);glVertex2i(310-i,173);glVertex2i(320-i,173);glVertex2i(320-i,168);
    glEnd();
    glFlush();

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();



 }

drawPipe();

for(j=0;j<63;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1); 
		 glBegin(GL_QUADS);
	  glVertex2i(70,168+j);glVertex2i(70,178+j);glVertex2i(75,178+j);glVertex2i(75,168+j);
    glEnd();
    glFlush();

	glColor3f(1,0,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,156.5,122,128);
	timer(k,102.5,102,108);

 
	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70,168+j);glVertex2i(70,178+j);glVertex2i(75,178+j);glVertex2i(75,168+j);
    glEnd();
      glFlush(); 

	  	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
      glFlush(); 


	}


	setFont(GLUT_BITMAP_HELVETICA_12);
	
	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 1 sending ...........");

    //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"........... sending ACK1 ");

	glColor3f(1.0,1.0,0.0);
    drawstring(160.0,370.0,1.0,"FRAME 1 sent ");

    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"ACK1 Recieved ");

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glBegin(GL_POLYGON);
	glVertex2f(10,115);
	glVertex2f(10,135);
	glVertex2f(230,135);
	glVertex2f(230,115);
	glEnd();
	glFlush();
	 
	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,0.8,0.4);
	drawstring(80.0,125.0,1.0," Frame 0 sent successfully");


 //  delay();
  
	setFont(GLUT_BITMAP_HELVETICA_12);
	
    //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 1 sent ");

    //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"ACK1 Recieved ");




}

void move3()  // MOVEMENT OF FRAME 2 ( FRAME 2 lost in packet crashing)
{

float i,j,temp=0.3;
float k=0;
timer2();

    glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(30.0,85.0,1.0,"Timer 2");

	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,0.0f);
    drawstring(160.0,370.0,1.0,"FRAME 2 sending ...........");


	
for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   
		glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();


	k+=0.05;
	timer(k,102.5,82,88);
	
	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();

	}

 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();
		
	k+=0.05;
	timer(k,102.5,82,88);
	
	 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();
	 }
drawPipe();
for(i=0;i<167;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();
		
	k+=0.05;
	timer(k,102.5,82,88);
	

  //glColor3d(0.1019607843,0.2452941176,0.2509803922);
  glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();
 


}
drawPipe();

	setFont(GLUT_BITMAP_HELVETICA_12);
	
	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 2 sending ...........");


	glColor3f(1.0f,0.0f,0.0f);
 	drawstring(217.0,248.0,1.0,"FRAME 2 lost");


	glColor3f(0.0f,1.0f,0.0f);
    drawstring(217.0,248.0,1.0,"FRAME 2 lost");

//	delay();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	//glColor3f(1.0f,1.0f,1.0f);
    drawstring(217.0,248.0,1.0,"FRAME 2 lost");



}

void move4() // RESENDING OF FRAME 2 (in packet crashing)
{

	
	float i,j,temp=0.3;
	 timer2();
	 timer4();
	 timer3();
	 float k=0;
	 float p=0;

	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,1.0f);
    drawstring(160.0,370.0,1.0,"FRAME 2 Resending ...........");

     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();

		k+=0.03;
	timer(k,102.5,82,88);

	 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();
	 }

	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,82,88);
	timer(k,396.5,102,108);
	p+=0.01;
	timer(p,430.5,122,128);
	

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();
	 }
drawPipe();
for(i=0;i<231;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();
	 
	k+=0.03;
	timer(k,102.5,82,88);
	timer(k,396.5,102,108);
	
	p+=0.01;
	
	timer(p,430.5,122,128);

	
   //glColor3d(0.1019607843,0.2452941176,0.2509803922);
   glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();


	
 
}

drawPipe();

for(j=0;j<60;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,0,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(335,178+j);glVertex2i(335,193+j);glVertex2i(340,193+j);glVertex2i(340,178+j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,82,88);
	timer(k,396.5,102,108);
	
	p+=0.01;
	
	timer(p,430.5,122,128);

   
     //glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(335,178+j);glVertex2i(335,193+j);glVertex2i(340,193+j);glVertex2i(340,178+j);
    glEnd();
      glFlush();

	}

	setFont(GLUT_BITMAP_HELVETICA_12);
	
  // glColor3d(0.1019607843,0.2452941176,0.2509803922);
  glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 2 Resending ...........");

	
    glColor3f(1.0f,1.0f,1.0f);
    drawstring(160.0,370.0,1.0,"FRAME 2 sent");


//	delay();

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 2 sent");

}
	

void move5()  // sending of frame 3
{

	
	float i,j,temp=0.3;
	timer2();	 
	timer3();
	
    float k=0,l=0;
	   
    glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(320.0,125.0,1.0,"Timer 3");

	setFont(GLUT_BITMAP_HELVETICA_12);
	
    glColor3f(1.0f,1.0f,0.0f);
    drawstring(160.0,370.0,1.0,"FRAME 3 sending ...........");



     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 { 
	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100,265-j);glVertex2i(100,280-j);glVertex2i(105,280-j);glVertex2i(105,265-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);
	

	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	glColor3d(0.1019607843,0.2452941176,0.2509803922);  // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(100,265-j);glVertex2i(100,280-j);glVertex2i(105,280-j);glVertex2i(105,265-j);
    glEnd();
    glFlush();

	 }


	 

	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 { 
	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100,238-j);glVertex2i(100,253-j);glVertex2i(105,253-j);glVertex2i(105,238-j);
    glEnd();
    glFlush();

		k+=0.03;
	timer(k,136.5,82,88);
    timer(k,362.5,122,128);


	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(100,238-j);glVertex2i(100,253-j);glVertex2i(105,253-j);glVertex2i(105,238-j);
    glEnd();
    glFlush();


	 } 
drawPipe();
for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100+i,183);glVertex2i(100+i,188);glVertex2i(115+i,188);glVertex2i(115+i,183);
    glEnd();
    glFlush();
	 
	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,362.5,122,128);
	
		glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(100+i,183);glVertex2i(100+i,188);glVertex2i(115+i,188);glVertex2i(115+i,183);
    glEnd();
    glFlush();

 }
drawPipe();


for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{

	glColor3f(1,0,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(350,183+j);glVertex2i(350,198+j);glVertex2i(355,198+j);glVertex2i(355,183+j);
    glEnd();
    glFlush();
		
	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,362.5,122,128);

 	
    //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		 glBegin(GL_QUADS);
	  glVertex2i(350,183+j);glVertex2i(350,198+j);glVertex2i(355,198+j);glVertex2i(355,183+j);
    glEnd();
    glFlush();

	}


	setFont(GLUT_BITMAP_HELVETICA_12);
	
    //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 3 sending ...........");

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"........... sending NAK2 ");

	glColor3f(1.0,1.0,0.0);
    drawstring(160.0,370.0,1.0,"FRAME 3 sent ");

    
//	delay();


	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 3 sent ");

    	
}

 
void move6()  // RESENDING OF FRAME 1(in packet crashing)
{

float i,j,temp=0.3;

glBegin(GL_LINE_LOOP);
	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glVertex2f(100,120);
	glVertex2f(225,120);
	glVertex2f(225,130);
	glVertex2f(100,130);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glVertex2f(100,120);
	glVertex2f(225,120);
	glVertex2f(225,130);
	glVertex2f(100,130);
	glEnd();
	glFlush();

for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();

	}

 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();
	
	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,0.0f);
    drawstring(160.0,365.0,1.0,"FRAME 1 sending .....");


		 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();
	 }
drawPipe();
for(i=0;i<231;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();
	 


	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(160.0,365.0,1.0,"FRAME 1 resending ...................");


  //glColor3d(0.1019607843,0.2452941176,0.2509803922);
  glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();
 }


drawPipe();
for(j=0;j<60;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,0,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
    glFlush();

	
	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(160.0,365.0,1.0,"FRAME 0 sending ...............................");


	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
      glFlush(); 

	}

	glColor3f(1.0,1.0,1.0);
	drawstring(70,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(85,268.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(100,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(365,268.0,0.0,"4");
	
	


}

	
void move7()  // MOVEMENT OF ACK 4 (in packet crashing)
{

	
	float i,j,temp=0.3;
	 

     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(365,265-j);glVertex2i(365,275-j);glVertex2i(370,275-j);glVertex2i(370,265-j);
    glEnd();
    glFlush();

	
	 	// glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		 glColor3d(0.1019607843,0.2452941176,0.2509803922);  // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(365,265-j);glVertex2i(365,275-j);glVertex2i(370,275-j);glVertex2i(370,265-j);
    glEnd();
    glFlush();

	 }


	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(365,228-j);glVertex2i(365,238-j);glVertex2i(370,238-j);glVertex2i(370,228-j);
    glEnd();
    glFlush();


	 	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(365,228-j);glVertex2i(365,238-j);glVertex2i(370,238-j);glVertex2i(370,228-j);
    glEnd();
    glFlush();

	 } 
drawPipe();
for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   
		glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(355-i,178);glVertex2i(355-i,183);glVertex2i(365-i,183);glVertex2i(365-i,178);
    glEnd();
    glFlush();
	    


	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(160.0,365.0,1.0,"FRAME 1 resending ...................");


	

   //glColor3d(0.1019607843,0.2452941176,0.2509803922);
   glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(355-i,178);glVertex2i(355-i,183);glVertex2i(365-i,183);glVertex2i(365-i,178);
    glEnd();
    glFlush();

		
 }
drawPipe();


for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1); 
		 glBegin(GL_QUADS);
	  glVertex2i(115,178+j);glVertex2i(115,188+j);glVertex2i(120,188+j);glVertex2i(120,178+j);
    glEnd();
    glFlush();

	
	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(160.0,365.0,1.0,"FRAME 0 sending ...............................");



		
	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(115,178+j);glVertex2i(115,188+j);glVertex2i(120,188+j);glVertex2i(120,178+j);
    glEnd();
      glFlush(); 

	  
	}
	glColor3f(1.0,1.0,1.0);
	drawstring(365,268.0,0.0,"4");
	

}

void move8()  // MOVEMENT OF ACK 4 (in packet crashing)
{

	
	float i,j,temp=0.3;
	float k=0;
	timer1();

	setFont(GLUT_BITMAP_HELVETICA_12);
	
    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"........... sending ACK2 ");


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();

	
	 	 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
		  glColor3d(0.1019607843,0.2452941176,0.2509803922);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();

	 }


	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,136.5,102,108);
		
	 	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	 } 
drawPipe();
for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   
		glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();
	   
	k+=0.05;
	timer(k,136.5,102,108);
	
		
  // glColor3d(0.1019607843,0.2452941176,0.2509803922);
  glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();

		
 }

drawPipe();

for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1); 
		 glBegin(GL_QUADS);
	  glVertex2i(85,178+j);glVertex2i(85,188+j);glVertex2i(90,188+j);glVertex2i(90,178+j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,136.5,102,108);
	

	
	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(85,178+j);glVertex2i(85,188+j);glVertex2i(90,188+j);glVertex2i(90,178+j);
    glEnd();
      glFlush(); 
}


	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"........... sending ACK2 ");

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glBegin(GL_POLYGON);
	glVertex2f(10,95);
	glVertex2f(10,115);
	glVertex2f(230,115);
	glVertex2f(230,95);
	glEnd();
	glFlush();
	 
	setFont(GLUT_BITMAP_HELVETICA_18);
	
    glColor3f(1.0,0.8,0.4);
	drawstring(80.0,105.0,1.0," Frame 1 sent successfully");

//	delay();

}


void move9()   // MOVEMENT OF ACK 1 (in safe sending)
{

	
	float i,j,temp=0.5;

	setFont(GLUT_BITMAP_HELVETICA_12);
	
	 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(160.0,365.0,1.0,"      FRAME 0 sent");


    //glColor3f(0.0f,1.0f,0.0f);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(250.0,365.0,1.0," .... sending ACK1 ");

		  
	
   
     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(320,265-j);glVertex2i(320,275-j);glVertex2i(325,275-j);glVertex2i(325,265-j);
    glEnd();
    glFlush();


	 //glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);  // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(320,265-j);glVertex2i(320,275-j);glVertex2i(325,275-j);glVertex2i(325,265-j);
    glEnd();
    glFlush();
	 }


	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(320,228-j);glVertex2i(320,238-j);glVertex2i(325,238-j);glVertex2i(325,228-j);
    glEnd();
    glFlush();

	setFont(GLUT_BITMAP_HELVETICA_12);
	
	 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(250.0,365.0,1.0," .... sending ACK1 ");

	 glColor3f(0.0f,1.0f,0.0f);
 	drawstring(230.0,365.0,1.0,".............. sending ACK1 ");

	//glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(320,228-j);glVertex2i(320,238-j);glVertex2i(325,238-j);glVertex2i(325,228-j);
    glEnd();
    glFlush();

	 } 
drawPipe();
for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(310-i,168);glVertex2i(310-i,173);glVertex2i(320-i,173);glVertex2i(320-i,168);
    glEnd();
    glFlush();
	 
		setFont(GLUT_BITMAP_HELVETICA_12);
	
		 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,365.0,1.0,".............. sending ACK1 ");
	 

    
	  glColor3f(0.0f,1.0f,0.0f);
 	drawstring(200.0,365.0,1.0,"........................... sending ACK1 ");



  // glColor3d(0.1019607843,0.2452941176,0.2509803922);
  glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(310-i,168);glVertex2i(310-i,173);glVertex2i(320-i,173);glVertex2i(320-i,168);
    glEnd();
    glFlush();

 }

drawPipe();
for(j=0;j<63;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1); 
		 glBegin(GL_QUADS);
	  glVertex2i(70,168+j);glVertex2i(70,178+j);glVertex2i(75,178+j);glVertex2i(75,168+j);
    glEnd();
    glFlush();


	
	setFont(GLUT_BITMAP_HELVETICA_12);
	
		 //glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(200.0,365.0,1.0,"........................... sending ACK1 ");



	  glColor3f(0.0f,1.0f,0.0f);
 	drawstring(160.0,365.0,1.0,"..................................... sending ACK1 ");



	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70,168+j);glVertex2i(70,178+j);glVertex2i(75,178+j);glVertex2i(75,168+j);
    glEnd();
      glFlush(); 

	  
	}




	setFont(GLUT_BITMAP_HELVETICA_12);
	
	  //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	  glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(160.0,365.0,1.0,"..................................... sending ACK1 ");


     glColor3f(0.0f,1.0f,0.0f);
 	drawstring(160.0,365.0,1.0,"   ACK1 received");



	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	
//	delay();

     //glColor3d(0.1019607843,0.2452941176,0.2509803922);
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(160.0,365.0,1.0,"   ACK1 received");


}


void move10()  // SIMULTANEOUS MOVEMENT  OF NAK 2 AS FRAME 2 IS LOST AND  FRAME 4  (in packet crashing)
{

	
	float i,j,temp=0.3;

	timer2();
	timer3();
	timer4();
	float k=0;
	 
    
    glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(320.0,105.0,1.0,"Timer 4");
	
	setFont(GLUT_BITMAP_HELVETICA_12);
	
    glColor3f(1.0f,1.0f,0.0f);
    drawstring(160.0,370.0,1.0,"FRAME 4 sending ...........");

	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"........... sending NAK2 ");


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,1,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115,265-j);glVertex2i(115,280-j);glVertex2i(120,280-j);glVertex2i(120,265-j);
    glEnd();
    glFlush();

	 	 //glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		  glColor3d(0.1019607843,0.2452941176,0.2509803922);  // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();


	//glColor3d(0.1019607843,0.2452941176,0.2509803922); 
	glColor3d(0.1019607843,0.2452941176,0.2509803922);  // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(115,265-j);glVertex2i(115,280-j);glVertex2i(120,280-j);glVertex2i(120,265-j);
    glEnd();
    glFlush();

	 }


	 

	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,1,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,170.5,82,88);
	timer(k,396.5,122,128);
	timer(k,362.5,102,108);


	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115,238-j);glVertex2i(115,253-j);glVertex2i(120,253-j);glVertex2i(120,238-j);
    glEnd();
    glFlush();


	 glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(115,238-j);glVertex2i(115,253-j);glVertex2i(120,253-j);glVertex2i(120,238-j);
    glEnd();
    glFlush();


	 } 
drawPipe();
for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,1,0);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();
	 
k+=0.03;
	timer(k,170.5,82,88);
	timer(k,396.5,122,128);
	timer(k,362.5,102,108);

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115+i,183);glVertex2i(115+i,188);glVertex2i(130+i,188);glVertex2i(130+i,183);
    glEnd();
    glFlush();
	 
   
   glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();


		glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(115+i,183);glVertex2i(115+i,188);glVertex2i(130+i,188);glVertex2i(130+i,183);
    glEnd();
    glFlush();

 }

drawPipe();

for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,1,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(85,178+j);glVertex2i(85,188+j);glVertex2i(90,188+j);glVertex2i(90,178+j);
    glEnd();
    glFlush();

	glColor3f(1,0,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(365,183+j);glVertex2i(365,198+j);glVertex2i(370,198+j);glVertex2i(370,183+j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,170.5,82,88);
    timer(k,396.5,122,128);
	timer(k,362.5,102,108);


	glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		 glBegin(GL_QUADS);
	  glVertex2i(85,178+j);glVertex2i(85,188+j);glVertex2i(90,188+j);glVertex2i(90,178+j);
    glEnd();
      glFlush(); 

	  glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		 glBegin(GL_QUADS);
	  glVertex2i(365,183+j);glVertex2i(365,198+j);glVertex2i(370,198+j);glVertex2i(370,183+j);
    glEnd();
    glFlush();

	}

	setFont(GLUT_BITMAP_HELVETICA_12);
	
    glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 4 sending ...........");

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"........... sending NAK2 ");


	glColor3f(1.0,1.0,0.0);
    drawstring(160.0,370.0,1.0,"FRAME 4 sent ");

    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"NAK2 Recieved ");

//	delay();


	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 4 sent ");

    glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"NAK2 Recieved ");

	


}

void move11()  // MOVEMENT OF ACK 4 (in packet crashing)
{

	
	float i,j,temp=0.3;
	timer2();
	timer3();
	timer4();
	float k=0;
	float p=0; 

	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"........... sending ACK4 ");



     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(380,265-j);glVertex2i(380,275-j);glVertex2i(385,275-j);glVertex2i(385,265-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);
		
	 	 glColor3d(0.1019607843,0.2452941176,0.2509803922);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(380,265-j);glVertex2i(380,275-j);glVertex2i(385,275-j);glVertex2i(385,265-j);
    glEnd();
    glFlush();

	 }


	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(380,228-j);glVertex2i(380,238-j);glVertex2i(385,238-j);glVertex2i(385,228-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,431.5,102,108);
	p+=0.01;
	timer(p,442,122,128);

		
	 	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(380,228-j);glVertex2i(380,238-j);glVertex2i(385,238-j);glVertex2i(385,228-j);
    glEnd();
    glFlush();

	 } 
drawPipe();
for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   
		glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(370-i,178);glVertex2i(370-i,183);glVertex2i(380-i,183);glVertex2i(380-i,178);
    glEnd();
    glFlush();
	    
	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,431.5,102,108);
	
	p+=0.01;
	timer(p,442,122,128);

	
   glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(370-i,178);glVertex2i(370-i,183);glVertex2i(380-i,183);glVertex2i(380-i,178);
    glEnd();
    glFlush();

		
 }


drawPipe();
for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1); 
		 glBegin(GL_QUADS);
	  glVertex2i(130,178+j);glVertex2i(130,188+j);glVertex2i(135,188+j);glVertex2i(135,178+j);
    glEnd();
    glFlush();
	
	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,431.5,102,108);
	
	p+=0.01;
	timer(p,442,122,128);

		
		
	glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		 glBegin(GL_QUADS);
	  glVertex2i(130,178+j);glVertex2i(130,188+j);glVertex2i(135,188+j);glVertex2i(135,178+j);
    glEnd();
      glFlush(); 

	  
	}
	glColor3f(1.0,1.0,1.0);
	drawstring(365,268.0,0.0,"4");


	
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"........... sending ACK4 ");


	
    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"NAK4 Recieved ");

//	delay();


	    glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"NAK4 Recieved ");


		

}

void move12()
{

	
	float i,j,temp=0.3;
	float k=0;
	timer1();

	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"........... sending ACK2 ");


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();

	
	 	 glColor3d(0.1019607843,0.2452941176,0.2509803922);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();

	 }


	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();
	
	k+=0.03;
	timer(k,136.5,102,108);
	
	 	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	 } 
drawPipe();
for(i=0;i<65;i=i+temp) //movement of data packet sidewise
	 {   
		glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();
	    
	k+=0.03;
	timer(k,136.5,102,108);
	

		
   glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();

		
 }
drawPipe();
    glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"........... sending ACK2 ");

}

void move13()   // SIMULTANEOUS  MOVEMENT OF ACK 1 AND FRAME 1(in safe sending)
{

	
	float i,j,temp=0.5;
	float k=0;
	timer1();
	timer2();

	setFont(GLUT_BITMAP_HELVETICA_18);
	
		glColor3f(1.0,0.8,0.4);
	drawstring(30.0,105.0,1.0," Timer 1");

	setFont(GLUT_BITMAP_HELVETICA_12);
	
    glColor3f(1.0f,1.0f,0.0f);
    drawstring(160.0,370.0,1.0,"FRAME 1 Resending ...........");

    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(230.0,345.0,1.0,"........... sending ACK3 ");

	 	
   
     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(350,265-j);glVertex2i(350,275-j);glVertex2i(355,275-j);glVertex2i(355,265-j);
    glEnd();
    glFlush();

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();


	 glColor3d(0.1019607843,0.2452941176,0.2509803922);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(350,265-j);glVertex2i(350,275-j);glVertex2i(355,275-j);glVertex2i(355,265-j);
    glEnd();
    glFlush();
	 }


	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(350,228-j);glVertex2i(350,238-j);glVertex2i(355,238-j);glVertex2i(355,228-j);
    glEnd();
    glFlush();

	 glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,102,108);
	timer(k,148.5,82,88);



		glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(350,228-j);glVertex2i(350,238-j);glVertex2i(355,238-j);glVertex2i(355,228-j);
    glEnd();
    glFlush();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();
	 
	 } 
drawPipe();
for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(340-i,168);glVertex2i(340-i,173);glVertex2i(350-i,173);glVertex2i(350-i,168);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,102,108);
	timer(k,148.5,82,88);

	 

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();
	 
	
   glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(340-i,168);glVertex2i(340-i,173);glVertex2i(350-i,173);glVertex2i(350-i,168);
    glEnd();
    glFlush();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();

 }


drawPipe();
for(j=0;j<63;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1); 
		 glBegin(GL_QUADS);
	  glVertex2i(100,168+j);glVertex2i(100,178+j);glVertex2i(105,178+j);glVertex2i(105,168+j);
    glEnd();
    glFlush();

	glColor3f(1,0,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,102,108);
	timer(k,148.5,82,88);

	

	glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		 glBegin(GL_QUADS);
	  glVertex2i(100,168+j);glVertex2i(100,178+j);glVertex2i(105,178+j);glVertex2i(105,168+j);
    glEnd();
      glFlush(); 

	  	glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
      glFlush(); 


	}


	setFont(GLUT_BITMAP_HELVETICA_12);
	
	 glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 1 Resending ...........");
    glColor3d(0.1019607843,0.2452941176,0.2509803922);
 	drawstring(230.0,345.0,1.0,"........... sending ACK3 ");


glColor3f(1.2,0.6,1.6);
drawstring(315.0,248.0,1.0,"DUPLICATE " );//Frame 1");

glColor3f(1.2,0.6,1.6);
drawstring(310.0,238.0,1.0,"FRAME 1 Discarded ");
glFlush(); 



}

void move14() // RESENDING OF FRAME 2 (in packet crashing)
{

	
	float i,j,temp=0.3;
	 timer2();
	 float k=0;
	 float q=0;

	glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(30.0,85.0,1.0,"Timer 2");
	
	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,1.0f);
    drawstring(160.0,370.0,1.0,"FRAME 2 Sending ...........");


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();

		k+=0.07;
	timer(k,145.5,102,108);
	q+=0.04;
	timer(q,102.5,82,88);



	 glColor3d(0.1019607843,0.2452941176,0.2509803922);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();
	 }

	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();

	k+=0.07;
	timer(k,145.5,102,108);
	q+=0.04;
	timer(q,102.5,82,88);

	
		glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();
	 }
drawPipe();
for(i=0;i<231;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();
	 
	k+=0.07;
	timer(k,145.5,102,108);
	q+=0.04;
	timer(q,102.5,82,88);

	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0f,1.0f,1.0f);
	drawstring(160.0,370.0,1.0,"FRAME 2 Sending ...........");

 //	drawstring(160.0,370.0,1.0,"FRAME 2 sending...................");


	
   glColor3d(0.1019607843,0.2452941176,0.2509803922);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();
 }


drawPipe();
for(j=0;j<60;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,0,0); 
		 glBegin(GL_QUADS);
	  glVertex2i(335,178+j);glVertex2i(335,193+j);glVertex2i(340,193+j);glVertex2i(340,178+j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,145.5,102,108);
	q+=0.04;
	timer(q,102.5,82,88);

   setFont(GLUT_BITMAP_HELVETICA_12);
	
	/////glColor3f(1.0f,1.0f,0.0f);
 	/////drawstring(160.0,365.0,1.0,"FRAME 0 sending ...............................");

		
	glColor3d(0.1019607843,0.2452941176,0.2509803922); 
		 glBegin(GL_QUADS);
	  glVertex2i(335,178+j);glVertex2i(335,193+j);glVertex2i(340,193+j);glVertex2i(340,178+j);
    glEnd();
      glFlush();

	}

    glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(160.0,370.0,1.0,"FRAME 2 Sending ...........");

//	delay();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glBegin(GL_POLYGON);
	glVertex2f(0,98);
	glVertex2f(0,115);
	glVertex2f(228,115);
	glVertex2f(228,98);
	glEnd();
	glFlush();

	//delay();
	

	setFont(GLUT_BITMAP_HELVETICA_18);
	
    glColor3f(1.0,0.8,0.4);
	drawstring(80.0,105.0,1.0," TIME OUT !!");
	glFlush();

	delay();
	delay();

	setFont(GLUT_BITMAP_HELVETICA_18);
	
    glColor3d(0.1019607843,0.2452941176,0.2509803922);
	drawstring(80.0,105.0,1.0," TIME OUT !!");
	glFlush();
	
	

	glColor3f(1.0,0.8,0.4);
	drawstring(228.0,105.0,1.0," TIMER 1 restarted");
	glFlush();
	


}
	


void draw1(void)  // DRAWING OF SEND WINDOW WITH ITS LABELS 
{
		// SENDER WINDOW
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.37,0.6,0.7);
	slide(25,2,50,250);				// Initial set of frames in BLUE color
	
	glColor3f(1.0,1.0,1.0);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(210.0,405.0,1.0,"S E N D   W I N D O W");

	
	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(50,220.0,0.0,"FRAMES  ALREADY");
	glColor3f(1.0,1.0,1.0);
	drawstring(50,210.0,0.0,"ACKNOWLEDGED");

	glColor3f(1.0,1.0,1.0);
	drawstring(125,220.0,0.0,"FRAMES SENT");
	glColor3f(1.0,1.0,1.0);
	drawstring(125,210.0,0.0,"BUT NOT");
	glColor3f(1.0,1.0,1.0);
	drawstring(125,200.0,0.0,"ACKNOWLEDGED");

	glColor3f(1.0,1.0,1.0);
	drawstring(195,220.0,0.0,"FRAMES THAT");
	glColor3f(1.0,1.0,1.0);
	drawstring(195,210.0,0.0,"CAN BE SENT");

	glColor3f(1.0,1.0,1.0);
	drawstring(290,220.0,0.0,"FRAMES THAT CAN NOT BE SENT");

	glColor3f(0.0,1.0,1.0);
	drawstring(127,278.0,0.0,"Sf");
	glColor3f(0.0,1.0,1.0);
	drawstring(70,300.0,0.0,"( Sf: FIRST OUTSTANDING FRAME )");

	glColor3f(0.0,1.0,1.0);
	drawstring(187,278.0,0.0,"Sn");
	glColor3f(0.0,1.0,1.0);
	drawstring(195,300.0,0.0,"( Sn: NEXT FRAME TO SEND )");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(55,260.0,0.0,"11");
	glColor3f(1.0,1.0,1.0); 
	drawstring(69,260.0,0.0,"12");
	glColor3f(1.0,1.0,1.0);
	drawstring(84,260.0,0.0,"13");
	glColor3f(1.0,1.0,1.0);
	drawstring(99,260.0,0.0,"14");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,260.0,0.0,"15");
	glColor3f(1.0,1.0,1.0);
	drawstring(130,260.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(147,260.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(163,260.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(177,260.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(191,260.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(206,260.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(221,260.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(236,260.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(251,260.0,0.0,"8");
	glColor3f(1.0,1.0,1.0);
	drawstring(266,260.0,0.0,"9");
	glColor3f(1.0,1.0,1.0);
	drawstring(280,260.0,0.0,"10");
	glColor3f(1.0,1.0,1.0);
	drawstring(295,260.0,0.0,"11");
	glColor3f(1.0,1.0,1.0);
	drawstring(310,260.0,0.0,"12");
	glColor3f(1.0,1.0,1.0);
	drawstring(324,260.0,0.0,"13");
	glColor3f(1.0,1.0,1.0);
	drawstring(339,260.0,0.0,"14");
	glColor3f(1.0,1.0,1.0);
	drawstring(354,260.0,0.0,"15");
	glColor3f(1.0,1.0,1.0);
	drawstring(370,260.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(385,260.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(400,260.0,0.0,"2");

	glEnd();
	glFlush();
	
	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // Send window in WHITE color
		glVertex2f(125,240);
	    glVertex2f(245,240);
		glVertex2f(245,285);
		glVertex2f(125,285);
    glEnd();
	glFlush();

	glColor3f(0.0,0.6,0.2);         
	slide(5,2,125,250);            // Frames already sent and yet to be acknowledged in GREEN
	glEnd();
	glFlush();
	glColor3f(1.0,0.0,0.0);
	slide(5,2,185,250);           // Frames that are yet to be sent in RED color
	glFlush();
	glEnd();


	//delay();

}


void draw2(void)  // // DRAWING OF RECEIVE WINDOW WITH ITS LABELS
{
		// RECIVER WINDOW
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glFlush();

	glColor3f(0.37,0.6,0.7);
	slide(25,2,50,250);   // Initial set of frames in BLUE color
	glEnd();
	glFlush();

		glColor3f(1.0,1.0,1.0);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(210.0,405.0,1.0,"R E C I E V E    W I N D O W");

	
	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(60,220.0,0.0,"FRAMES  ALREADY RECIEVED");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(172,220.0,0.0,"FRAMES THAT CAN BE RECIEVED");
	glColor3f(1.0,1.0,1.0);
	drawstring(172,210.0,0.0,"AND STORED FOR LATER DELIVERY");
	glColor3f(1.0,1.0,1.0);
	drawstring(172,200.0,0.0,"( GREEN BOXES ALREADY RECIEVED )");


	glColor3f(1.0,1.0,1.0);
	drawstring(300,220.0,0.0,"FRAMES THAT CAN NOT BE RECIEVED");

	glColor3f(1.0,1.0,1.0);
	drawstring(175,278.0,0.0,"Rn");
	glColor3f(1.0,1.0,1.0);
	drawstring(120,300.0,0.0,"( Rn: NEXT FRAME EXPECTED )");

	glColor3f(1.0,1.0,1.0);
	drawstring(55,260.0,0.0,"11");
	glColor3f(1.0,1.0,1.0);
	drawstring(69,260.0,0.0,"12");
	glColor3f(1.0,1.0,1.0);
	drawstring(84,260.0,0.0,"13");
	glColor3f(1.0,1.0,1.0);
	drawstring(99,260.0,0.0,"14");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,260.0,0.0,"15");
	glColor3f(1.0,1.0,1.0);
	drawstring(130,260.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(147,260.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(163,260.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(177,260.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(191,260.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(206,260.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(221,260.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(236,260.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(251,260.0,0.0,"8");
	glColor3f(1.0,1.0,1.0);
	drawstring(266,260.0,0.0,"9");
	glColor3f(1.0,1.0,1.0);
	drawstring(280,260.0,0.0,"10");
	glColor3f(1.0,1.0,1.0);
	drawstring(295,260.0,0.0,"11");
	glColor3f(1.0,1.0,1.0);
	drawstring(310,260.0,0.0,"12");
	glColor3f(1.0,1.0,1.0);
	drawstring(324,260.0,0.0,"13");
	glColor3f(1.0,1.0,1.0);
	drawstring(339,260.0,0.0,"14");
	glColor3f(1.0,1.0,1.0);
	drawstring(354,260.0,0.0,"15");
	glColor3f(1.0,1.0,1.0);
	drawstring(370,260.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(385,260.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(400,260.0,0.0,"2");


	
	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // Send window in WHITE color
		glVertex2f(170,240);
	    glVertex2f(290,240);
		glVertex2f(290,285);
		glVertex2f(170,285);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);         
	slide(2,2,170,250);            // Frames already sent and yet to be acknowledged in GREEN
	glEnd();
	glFlush();
	
	glColor3f(0.0,0.6,0.2);
	slide(2,2,185,250);  
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	slide(3,2,200,250); 
	glEnd();
	glFlush();

	glColor3f(0.0,0.6,0.2);
	slide(2,2,230,250); 
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	slide(2,2,245,250); 
	glEnd();
	glFlush();

	glColor3f(0.0,0.6,0.2);
	slide(2,2,260,250); 
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	slide(2,2,275,250); 


	glEnd();	
	glFlush();


   // delay(); 

}



void draw3(void)   // DRAWING OF SAFE SENDING
{

	//Sender site initial window
	glClear(GL_COLOR_BUFFER_BIT);
	computer();
				
	glColor3f(1.6,1.9,1.2);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(200.0,465.0,1.0,"S A F E    S E N D I N G");

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(84,268.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(99,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(130,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(147,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(163,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(177,268.0,0.0,"0");

	glColor3f(1.0,1.0,1.0);
	drawstring(305,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(349,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(364,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(379,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(394,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(409,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(424,268.0,0.0,"0");

  //SENDER SIDE
	
	glColor3f(0.37,0.6,0.7);    // Initial set of frames in BLUE color
	slide(10,2,50,260);            
	glFlush();
	
	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // Send window in WHITE color
		glVertex2f(50,255);
	    glVertex2f(110,255);
		glVertex2f(110,290);
		glVertex2f(50,290);
    glEnd();
	glFlush();


	glColor3f(0.37,0.6,0.7);
	slide(10,2,300,260);             // Initial set of frames in BLUE color
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);   // initial sending frames in red
    slide(5,2,50,260);
    glEnd();
	glFlush();


	
glColor3f(1.0,0.0,0.0);   // receiver window in red
slide(5,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // receiver window in WHITE color
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();

  // delay();
   glColor3f(0.0,0.6,0.2);  //Frame 0 sent and becoming green
   slide(2,2,50,260);
   glEnd();
   glFlush();

 
   glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(4,2,65,260);
glEnd();
	glFlush();

drawPipe();
move1();	// movement of data packet


glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(2,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);   // 4th frame red
slide(2,2,360,260);
glEnd();
	glFlush();

//glColor3d(0.1019607843,0.2452941176,0.2509803922);
glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // To remove initial WHITE window trace
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

//glColor3f(0.37,0.6,0.7); 
glColor3d(0.1019607843,0.2452941176,0.2509803922);   // To remove traces
glBegin(GL_LINES);
glVertex2f(300,260);
glVertex2f(300,285);
glEnd();
glFlush();

//glColor3f(1.0,0.0,0.0);
glColor3d(0.1019607843,0.2452941176,0.2509803922);    // To remove traces
glBegin(GL_LINES);
glVertex2f(360,260);
glVertex2f(360,285);
glEnd();
glFlush();


glColor3f(0.0,0.6,0.2);   // sliding the window and becoming green 
slide(2,2,65,260);
glEnd();
	glFlush();

glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(1,2,300,260);
glEnd();
	glFlush();

move2();

	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");


glColor3f(0.37,0.6,0.7);   // sliding the window and becoming blue
slide(2,2,50,260);
glEnd();
	glFlush();

//glColor3d(0.1019607843,0.2452941176,0.2509803922);
glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // To remove initial WHITE window trace
		glVertex2f(50,255);
	    glVertex2f(50,290);
		glVertex2f(110,290);
		glVertex2f(110,255);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);   // sliding the window and becoming blue
 slide(2,2,110,260);
glBegin(GL_LINES);
glVertex2f(110,260);
glVertex2f(110,285);
glEnd();
	glFlush();



glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();



//glColor3f(0.37,0.6,0.7);
glColor3d(0.1019607843,0.2452941176,0.2509803922);				//to remove traces
glBegin(GL_LINES);
glVertex2f(50,260);
glVertex2f(50,285);
glEnd();
glFlush();

//glColor3d(0.1019607843,0.2452941176,0.2509803922);
glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(315,260);
	glVertex2f(315,285);
	glVertex2f(375,260);
	glVertex2f(375,285);
	glEnd();
	glFlush();
	
	glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(3,2,300,260);
glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(2,2,375,260);
glEnd();
	glFlush();

	//delay();
move8();
	
	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	

//glColor3d(0.1019607843,0.2452941176,0.2509803922);
glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // remove window trace
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(5,2,80,260);
glEnd();
	glFlush();

	glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(3,2,50,260);
glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(80,255);
	    glVertex2f(80,290);
		glVertex2f(140,290);
		glVertex2f(140,255);
    glEnd();
	glFlush();
	drawPipe();

//	delay();

}

void draw4(void)  // DRAWING OF PACKET CRASHNG
{
	//second screen for lost packet
//delay();


glClear(GL_COLOR_BUFFER_BIT);
	computer();
	
glColor3f(1.6,1.9,1.2);

	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(200.0,465.0,1.0,"P A C K E T   C R A S H I N G");

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(56,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(70,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(85,268.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(100,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,268.0,0.0," 4");
	glColor3f(1.0,1.0,1.0);
	drawstring(130,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(147,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(163,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(177,268.0,0.0,"0");

	glColor3f(1.0,1.0,1.0);
	drawstring(305,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(349,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(365,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(379,268.0,0.0," 5");
	glColor3f(1.0,1.0,1.0);
	drawstring(394,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(409,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(424,268.0,0.0,"0");


	glColor3f(0.37,0.6,0.7);
	slide(10,2,50,260);			// Initial set of frames in BLUE color

	glColor3f(1.0,0.0,0.0);
	slide(5,2,50,260);             // red frames in window
	glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // send window in WHITE color
		glVertex2f(50,255);
	    glVertex2f(50,290);
		glVertex2f(110,290);
		glVertex2f(110,255);
    glEnd();
	glFlush();




//Reciver Window
	glColor3f(0.37,0.6,0.7);
	slide(10,2,300,260);             // Initial set of frames in BLUE color
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	slide(5,2,300,260);             // red frames in window
	glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();



//	delay();

	glColor3f(0.0,0.6,0.2);
    slide(2,2,50,260);             // red frames in window
	glEnd();
	glFlush();

	move1();


glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(2,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);   // 4th frame red
slide(2,2,360,260);
glEnd();
	glFlush();

glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // To remove initial WHITE window trace
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

glColor3f(0.37,0.6,0.7);    // To remove traces
glBegin(GL_LINES);
glVertex2f(300,260);
glVertex2f(300,285);
glEnd();
glFlush();

glColor3f(1.0,0.0,0.0);    // To remove traces
glBegin(GL_LINES);
glVertex2f(360,260);
glVertex2f(360,285);
glEnd();
glFlush();



 glColor3f(0.0,0.6,0.2);   // sliding the window and becoming green 
slide(2,2,65,260);
glEnd();
	glFlush();


	move2();


glColor3f(0.37,0.6,0.7);   // sliding the window and becoming blue
slide(2,2,50,260);
glEnd();
	glFlush();

glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // To remove initial WHITE window trace
		glVertex2f(50,255);
	    glVertex2f(50,290);
		glVertex2f(110,290);
		glVertex2f(110,255);
    glEnd();
	glFlush();

glColor3f(1.0,0.0,0.0);   // sliding the window and becoming blue
slide(2,2,110,260);
glBegin(GL_LINES);
glVertex2f(110,260);
glVertex2f(110,285);
glEnd();
	glFlush();



glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();



glColor3f(0.37,0.6,0.7);				//to remove traces
glBegin(GL_LINES);
glVertex2f(50,260);
glVertex2f(50,285);
glEnd();
glFlush();

glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(315,260);
	glVertex2f(315,285);
	glVertex2f(375,260);
	glVertex2f(375,285);
	glEnd();
	glFlush();
	
glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(3,2,300,260);
glEnd();
	glFlush();




glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(2,2,375,260);
glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(56,268.0,0.0,"0");
		glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");

move8();

setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(70,268.0,0.0,"1");
	
glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // remove window trace
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(5,2,80,260);
glEnd();
	glFlush();

	glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(3,2,50,260);
glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(80,255);
	    glVertex2f(80,290);
		glVertex2f(140,290);
		glVertex2f(140,255);
    glEnd();
	glFlush();

	glColor3f(0.0,0.6,0.2);
	slide(2,2,80,260);
	glFlush();

move3();
	
	glColor3d(1.0000000,0.38823529411,0.27843137254);			//packet crashing
	glBegin(GL_POLYGON);
	glVertex2f(215,238);
	glVertex2f(260,238);
	glVertex2f(260,268);
	glVertex2f(215,268);
	// glVertex2f(280,198);
	// glVertex2f(267.5,193);
	// glVertex2f(280,183);
	// glVertex2f(260,193);
	// glVertex2f(240,183);
	// glVertex2f(252.5,193);
	glEnd();
	glFlush();
glColor3f(1.0f,1.0f,0.0f);
 	drawstring(217.0,248.0,1.0,"FRAME 2 lost");

	glColor3d(0.1019607843,0.2452941176,0.2509803922);			//to remove traces
	glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(260,178);
	glVertex2f(255,168);
    glEnd();
	glFlush();

    glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(252.5,163);
	glVertex2f(240,153);
	glEnd();
	glFlush();


	glColor3f(0.37,0.6,0.7);
	slide(2,2,65,260);
	glFlush();


	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(80,260);
	glVertex2f(80,285);
	glEnd();

  glColor3f(0.0,0.6,0.2);
	slide(2,2,95,260);
	glFlush();


   move5();

   glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	

   glColor3f(0.0,0.6,0.2);
	slide(2,2,345,260);
	glFlush();

    glColor3f(0.0,0.6,0.2);
	slide(2,2,110,260);
	glFlush();


	move10();

	glColor3f(0.0,0.6,0.2);
	slide(2,2,360,260);
	glFlush();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_POLYGON);         //to remove timer trace
		glVertex2f(100,80);
	    glVertex2f(100,90);
		glVertex2f(225,90);
		glVertex2f(225,80);
    glEnd();
	glFlush();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);			//packet crashing
	glBegin(GL_POLYGON);
	glVertex2f(215,238);
	glVertex2f(260,238);
	glVertex2f(260,268);
	glVertex2f(215,268);
	// glVertex2f(280,198);
	// glVertex2f(267.5,193);
	// glVertex2f(280,183);
	// glVertex2f(260,193);
	// glVertex2f(240,183);
	// glVertex2f(252.5,193);
	glEnd();
	glFlush();


	glColor3d(0.1019607843,0.2452941176,0.2509803922);			//to remove traces
	glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(260,178);
	glVertex2f(255,168);
    glEnd();
	glFlush();

    glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(252.5,163);
	glVertex2f(240,153);
	glEnd();
	glFlush();

glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(217.0,248.0,1.0,"FRAME 2 lost");
    
	move4();
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	
glColor3f(0.0,0.6,0.2);
	slide(2,2,330,260);
	glFlush();

 //delay();

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


	glColor3f(0.37,0.6,0.7);
	slide(6,2,300,260);
	glFlush();


glColor3f(1.0,0.0,0.0);
	slide(5,2,375,260);
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(375,255);
	    glVertex2f(375,290);
		glVertex2f(435,290);
		glVertex2f(435,255);
    glEnd();
	glFlush();

move11();

	glColor3f(1.0,1.0,1.0);
	drawstring(85,268.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(100,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,268.0,0.0," 4");
	glColor3f(1.0,1.0,1.0);
	drawstring(379,268.0,0.0," 5");
	

glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(80,255);
	    glVertex2f(80,290);
		glVertex2f(140,290);
		glVertex2f(140,255);
    glEnd();
	glFlush();


glColor3f(0.37,0.6,0.7);
	slide(6,2,50,260);
	glFlush();


glColor3f(1.0,0.0,0.0);
	slide(5,2,125,260);
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(125,255);
	    glVertex2f(125,290);
		glVertex2f(185,290);
		glVertex2f(185,255);
    glEnd();
	glFlush();


	
}

void draw5(void)							// to show time out
{
	
	//Sender site initial window
	glClear(GL_COLOR_BUFFER_BIT);
		computer();
	glColor3f(0.37,0.6,0.7);
	slide(10,2,50,260);             // Initial set of frames in BLUE color
	glFlush();

	glColor3f(1.6,1.9,1.2);

	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(200.0,465.0,1.0,"T I M E    O U T");

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(84,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(99,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(130,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(147,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(163,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(177,268.0,0.0,"0");

	glColor3f(1.0,1.0,1.0);
	drawstring(305,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(349,268.0,0.0," 3");
	glColor3f(1.0,1.0,1.0);
	drawstring(364,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(379,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(394,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(409,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(424,268.0,0.0,"0");


	
	

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // Send window in WHITE color
		glVertex2f(50,255);
	    glVertex2f(110,255);
		glVertex2f(110,290);
		glVertex2f(50,290);
    glEnd();
	glFlush();


	glColor3f(0.37,0.6,0.7);
	slide(10,2,300,260);             // Initial set of frames in BLUE color
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);   // initial sending frames in red
slide(5,2,50,260);
glEnd();
	glFlush();


	
glColor3f(1.0,0.0,0.0);   // receiver window in red
slide(5,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // receiver window in WHITE color
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();

  // delay();
   glColor3f(0.0,0.6,0.2);  //Frame 0 sent and becoming green
   slide(2,2,50,260);
   glEnd();
   glFlush();
//timer1();

   
   

   glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(4,2,65,260);
glEnd();
	glFlush();


move1();	// movement of data packet

glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(2,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);   // 4th frame red
slide(2,2,360,260);
glEnd();
	glFlush();

glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // To remove initial WHITE window trace
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

glColor3f(0.37,0.6,0.7);    // To remove traces
glBegin(GL_LINES);
glVertex2f(300,260);
glVertex2f(300,285);
glEnd();
glFlush();

glColor3f(1.0,0.0,0.0);    // To remove traces
glBegin(GL_LINES);
glVertex2f(360,260);
glVertex2f(360,285);
glEnd();
glFlush();



glColor3f(0.0,0.6,0.2);   // sliding the window and becoming green 
slide(2,2,65,260);
glEnd();
	glFlush();

glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(1,2,300,260);
glEnd();
	glFlush();

move2();
	
	setFont(GLUT_BITMAP_HELVETICA_12);
	
	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	


glColor3f(0.37,0.6,0.7);   // sliding the window and becoming blue
slide(2,2,50,260);
glEnd();
	glFlush();

glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // To remove initial WHITE window trace
		glVertex2f(50,255);
	    glVertex2f(50,290);
		glVertex2f(110,290);
		glVertex2f(110,255);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);   // sliding the window and becoming blue
 slide(2,2,110,260);
glBegin(GL_LINES);
glVertex2f(110,260);
glVertex2f(110,285);
glEnd();
	glFlush();



glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();



glColor3f(0.37,0.6,0.7);				//to remove traces
glBegin(GL_LINES);
glVertex2f(50,260);
glVertex2f(50,285);
glEnd();
glFlush();


glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(315,260);
	glVertex2f(315,285);
	glVertex2f(375,260);
	glVertex2f(375,285);
	glEnd();
	glFlush();
	
	glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(3,2,300,260);
glEnd();
	glFlush();



glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(2,2,375,260);
glEnd();
	glFlush();

	
	move12();

	

	glColor3d(1.0000000,0.38823529411,0.27843137254);			//packet crashing
	glBegin(GL_POLYGON);
	glVertex2f(215,238);
	glVertex2f(260,238);
	glVertex2f(260,268);
	glVertex2f(215,268);
	// glVertex2f(280,198);
	// glVertex2f(267.5,193);
	// glVertex2f(280,183);
	// glVertex2f(260,193);
	// glVertex2f(240,183);
	// glVertex2f(252.5,193);
	glEnd();
	glFlush();
setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0f,1.0f,1.0f);
    drawstring(217.0,248.0,1.0,"ACK 2 lost");




	glColor3d(0.1019607843,0.2452941176,0.2509803922);			//to remove traces
	glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(260,178);
	glVertex2f(255,168);
    glEnd();
	glFlush();

    glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(252.5,163);
	glVertex2f(240,153);
	glEnd();
	glFlush();

glColor3f(0.0,0.6,0.2);   // sliding the window and becoming green 
slide(2,2,80,260);
glEnd();
	glFlush();

		glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_POLYGON);         // moving the reciever window in WHITE color
		glVertex2f(358,120);
	    glVertex2f(358,130);
		glVertex2f(485,130);
		glVertex2f(485,120);
    glEnd();
	glFlush();


    move14();

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0,"2");
	

	
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_POLYGON);         // moving the reciever window in WHITE color
		glVertex2f(98,100);
	    glVertex2f(98,112);
		glVertex2f(225,112);
		glVertex2f(225,100);
    glEnd();
	glFlush();


glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(4,2,300,260);
glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(2,2,390,260);
glEnd();
	glFlush();


	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(345,255);
	    glVertex2f(345,290);
		glVertex2f(405,290);
		glVertex2f(405,255);
    glEnd();
	glFlush();


	glColor3d(0.1019607843,0.2452941176,0.2509803922);			//packet crashing
	//glColor3d(1.0000000,0.38823529411,0.27843137254);			//packet crashing
	glBegin(GL_POLYGON);
	glVertex2f(215,238);
	glVertex2f(260,238);
	glVertex2f(260,268);
	glVertex2f(215,268);
	// glVertex2f(280,198);
	// glVertex2f(267.5,193);
	// glVertex2f(280,183);
	// glVertex2f(260,193);
	// glVertex2f(240,183);
	// glVertex2f(252.5,193);
	glEnd();
	glFlush();

		setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3d(0.1019607843,0.2452941176,0.2509803922);
    drawstring(217.0,248.0,1.0,"ACK 2 lost");

move13();
setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(84,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(349,268.0,0.0,"3");


glColor3d(0.1019607843,0.2452941176,0.2509803922);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();

	glColor3f(0.37,0.6,0.7);   // sliding the window and becoming green 
slide(4,2,50,260);
glEnd();
	glFlush();

glColor3f(1.0,0.0,0.0);   // sliding the window and becoming green 
slide(5,2,95,260);
glEnd();
	glFlush();


	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);         // moving the reciever window in WHITE color
		glVertex2f(95,255);
	    glVertex2f(95,290);
		glVertex2f(155,290);
		glVertex2f(155,255);
    glEnd();
	glFlush();



}

void draw6(void)				// text for keyboard interaction

{

	glColor3d(0.1019607843,0.2452941176,0.2509803922);
	glBegin(GL_POLYGON);
	glVertex2f(0,0);
	glVertex2f(0,135);
	glVertex2f(500,135);
	glVertex2f(500,0);
	glEnd();
	glFlush();


	glColor3f(1.0f,1.0f,1.0f);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(360.0,130.0,1.0,"DO U WISH TO CONTINUE?");
	glColor3f(1.0f,1.0f,1.0f);
	drawstring(360.0,110.0,1.0,"PRESS  Y/N");
	glFlush();
}





void display(void)
{  

	glClear(GL_COLOR_BUFFER_BIT);
	title();
	delay();
	//delay();
	draw();
	text();
}



void mykeyboard(unsigned char key,int x,int y)
{
	if(key=='y' || key=='Y')
	{
		glClearColor(0.1019607843,0.2452941176,0.2509803922,0.0);
		draw();
		text();

	
	}
	else if(key=='N' || key=='n')
	{
		exit(0);
	}
}
	




void myMouse(int btn, int state, int x, int y)
{

	if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN )
	{
		//printf("x = %d, y = %d \n",x,y);
		//x=x/2;
		//y=(1000-y)/2.1;
		if ((x>=470 && x<=792) && (y>=112 && y<=149 ))// 1 menu
		
		{
			//glClearColor(0.0,0.0,0.0,1.0);
			draw1();
			draw6();
		
		}
		
		if((x>=470 && x<=792) && (y>=190 && y<=228 ))//   2 menu
		{
			//glClearColor(0.0,0.0,0.0,1.0);
			draw2();
			draw6();

		 
		}
		if((x>=470 && x<=792) && (y>=267 && y<=305 ))  // 3 menu
		{
			//glClearColor(0.0,0.0,0.0,1.0);
				
				draw3();
				delay();
				draw6();

		}

		if((x>=469 && x<=792) && (y>=344 && y<=383 ))  // 4 menu
		{
			//glClearColor(0.0,0.0,0.0,1.0);
				draw4();
				delay();
				draw6();

		}

		if((x>=469 && x<=792) && (y>=422 && y<=463 ))  // 5 menu
		{
			//glClearColor(0.0,0.0,0.0,1.0);
				draw5();
				delay();
				draw6();
		}

		if((x>=469 && x<=792) && (y>=501 && y<=541 ))  // 6 menu
		{
				exit(0);
		}
		
	}
}




int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  	glutInitWindowPosition(0,0);
	glutInitWindowSize(1000,1000);
	glutCreateWindow("Selective Repeat ARQ");
    glutDisplayFunc(display);
	glutMouseFunc(myMouse);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glutKeyboardFunc(mykeyboard);
	myInit();
	glutMainLoop();
    

}
