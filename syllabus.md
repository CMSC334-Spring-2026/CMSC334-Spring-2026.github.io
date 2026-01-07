---
layout: article
title: Syllabus

# layout: article
layout: default
aside:
  toc: true
---

# Syllabus

## Meeting Times and Staff

### Instructor

* **Instructor:** Dr. Doug Szajda
* **Email:** [dszajda@richmond.edu](mailto:dszajda@richmond.edu)
* **Office Hours:** (Jepson 219)
  * TBD -- I will discuss this in lecture so we can agree on times that work for you.
  * Non-scheduled times by appointment (email me or catch me before or after class to schedule)
  * You should also feel free to drop by my office.
* **Prerequisites:** CMSC 301 with a minimum grade of C- (See [computer science curriculum](https://cs.richmond.edu/Academics/courses/index.html))

### Meeting Times

## Class/Lab Info
* Lecture (Jepson 103a)
  * Tue 12:00PM - 1:15PM
  * Thr 12:00PM - 1:15PM
* Lab (Jespson 103a)
  * Fri 12:00PM - 12:50PM

### Course Staff
- Dr. Doug Szajda - Instructor


## Course Details 

### Welcome to Computer Security!

Your dedication and hard work have led you to this moment; you belong here. Congratulations on your achievements, and welcome to the course. I am thrilled to have you here and am looking forward to a semester filled with growth, learning, and success. Together, we will explore, create, and innovate. Let's make this an outstanding semester for everyone!

### Course Description

This is a one unit course on computer security. We will focus on the principles of security, covering the basics of cryptography, program security, operating system security, and network security.  We will be reading and discussing some current research in the field well as some "classic" primary sources. The course has a programming component, though it is somewhat different than most UR courses in that you are often asked to modify existing code, or "hack" existing code.

### Course Topics 

Topics covered include (but are not limited to):

- Introduction to computer networks -- what are the problems, what are the building blocks, how are they arranged
- The application layer, and consideration of specific application programs 
- The transport layer
- The networks layer (data plane and control plane)
- The Data link layer (and various data link networks)
- Mobile networking
- Whatever interesting network topics we may have time for

## Prerequisite

The pre-requisite for this course is CMSC 301, completed with a grade of C- or better, or permission of the instructor.  Though a knowledge of computer networks is helpful, it is
not required. Students are expected to be able to implement
significant projects in C++ and Java.  Readings and lectures may refer
to C, C++, Java, and at times, assembly, so you need to be able to
understand these.  Regarding assembly code, I want to be clear:
As you know from CS 301, writing assembly code can be tricky.  Understanding
it is usually less difficult.  We will likely run across examples of assembly
code written for architectures and platforms with which you are not familiar. 
You need to gain some comfort with being able to understand this code, given
explanations of the assembly syntax being used.  I expect that I
will need to clarify some aspects of the assembly code we encounter.  This
does not mean you need to become expert in these assembly dialects. 

## Textbook and Resources

### Textbook

There is no textbook for this course.  I will explain in lecture why that is.  There is,
however, a good bit of reading of primary sources (security papers).  

### Resources

- [The RFC-Editor portal](https://www.rfc-editor.org/) You likely don't know what 
this is right now, but you will soon. 

- [All the example code from the TCP/IP Sockets in C text](https://cs.baylor.edu/~donahoo/practical/CSockets2/textcode.html)

- [The student resources for your textbook](https://media.pearsoncmg.com/ph/esm/ecs_kurose_compnetwork_8/cw/)


## Coursework and Grading

Traditional grading schemes have been shown to be counterproductive for 
a number of reasons.  One of these is that such systems often incentivize the 
wrong thing -- getting the highest grade -- as opposed to incentivizing 
learning the material.  While I will not be using a specifications-based grading 
system (I'm still working out what that should look like), I want to make
learning goals clear, and provide students with an opportunity to 
earn back some of the points that are missed on midterm exams. 


### Course Work
- There will be two midterm exams, and one final.  With the exception of the 
final, you will have the opportunity to earn back a portion of the points you 
lose on an exam.  The midterm exams will be primarily take home exams.  They will
be open-book, open note.  They will definitely *not* be open Internet.  In addition
the take-home portion of the exam, there will be a 30 minute in-person oral portion of the exam.  During this latter portion of the exam, I will be asking you to explain some of the answers you have submitted in the take-home portion of the exam.  

- There will be two midterm projects, and one final project.  Note that I don't call
these "programming" projects.  The first project will require that you modify code in order to implement two fundamental types of attacks on vulnerable code.  The second project will likely be a traditional programming project (though I am currently considering exactly what I want this to be).  

- The final project will be conducted in groups of two students.  You will be presenting a recent security paper, as if you were presenting at a conference.  I will provide more details in lecture.  For all of the non-exam assignments, there will not be any opportunity to earn back points, because unlike an exam, you can ask me questions before your submit.

### Grade Determination


The final grade for the course must, of course, be a grade.  It will be determined
according to which learning outcomes you have met.  I have yet to completely work them
out, but I will have them worked out soon (and may still be tweaking things during
the semester). 

My goal is that the final exam grades reflect the following ideal as much as possible. (Note that this means that curving grades is not necessary, nor are you competing against your classmates.)
- An ``A'' means that your knowledge of this material is exceptional. When you have to build on the material that you learned in this class in your future classes, then you will be able to do so easily.
- A ``B'' means that you have a good understanding of most of the material, but may have some gaps in your understanding, or are not as comfortable with some aspects of it as you might be. As such you may want to review this material before taking more advanced classes. You will be able to apply the material in this class, but you may have difficulty doing so with some of it.
- A ``C'' means that your knowledge of this material is average/mediocre. You will likely struggle to apply this material in your future classes, as you have struggled learning the material in this class.
- A ``D'' means that you are not ready for future classes that builds on material from this class.
- An ``F'' means that in addition to the conditions for a ``D'' grade, you also didn't try and/or failed to hand in work.
- A ``V'' means that you missed too many classes to pass the class, regardless of your performance on the work.

### Programming Expectations

This course requires, as mentioned above, the completion of four programming projects. Projects must be written in C or C++.  Note that this is a systems course - successfully completing coding assignments is a necessary condition for earning a desirable grade (because being able to code such projects is one of the course learning goagls). Moreover, the projects are an essential part of the learning process. For this reason, if a student is missing even a single project at the end of the course, he or she will receive a grade of `F' for the course!

Unlike some of the lower level CS courses, in this course (and any other senior level course) a program must both compile without errors (as defined below) and suggest an earnest effort to meet project
specifications in order to receive any credit! There are a number of other factors that may influence the grade that a program receives. Here are some of them:

- Is the program "user-friendly"? That is, does the user have to guess at how to use the program, or does the program somehow provide this information to the user (e.g., via a README file)?

- Is the code readable? (One letter variable names, other than for loop indices, are strictly prohibited!)

- Is the code well documented? Every program assignment grade will have a significant documentation component. No one should have to dig through poorly documented code (try it some time)!

- Is the code "well-structured"?

- How well has your code been debugged and tested? 

You should consider me a client who is purchasing your code. As the developer, it is your responsibility to ensure that I receive the latest working version of your source code and that it compiles correctly on the CS Department Linux cluster. If you happen to submit an old version of your code by accident, or you submit binaries instead of source code, then I'm not going to be a happy customer.

In line with the previous item, the version of the code you submit to me should have all debugging output removed. This does not mean that you have to remove the debugging code from the source. It does mean that when the code runs, I should not be getting debugging output by default.

### The Programming Environment

We will be coding in UNIX based environments and using the command line and whatever editor you prefer. All programming assignments must satisfy and/or include the following:

- They must be implemented in C or C++.
- They must compile without warnings using the installed GNU C or C++ compiler, with the -Wall option, on the department Linux cluster. I mention this because C and C++ are, well, not always portable (but you knew that), and so it is possible (and in fact likely for some of these projects) that network code that compiles and runs correctly on one platform will perform differently on another.
- Every project must include a thorough (though concise) report describing the final testing you performed in order to convince yourself that the program meets all project specifications.

### On Coding Help and Debugging

Programming Help: I am happy to discuss programming and debugging techniques, as well as the semantics of particular functions calls. I am also happy to direct you to appropriate packages. And I will at times provide you with "shell code". With regards to programming, I am in general happy to help you in whatever way is necessary. I will not, however, debug your code for you! If you describe your programming issue with me, I will be happy to suggest potentially useful debugging strategies. But debugging is an important part (and in fact the majority part for these projects) of the programming process. As such, you need to be comfortable with doing it on your own!  That does not mean I intend for you to be stuck on a particular error for hours.  

A word of caution: I mentioned above that debugging is an essential part of the programming process. For the project in this course, you might end up spending four or five times more effort in debugging your code than in writing it! Several years ago I spent one afternoon coding one of these assignments, and four days debugging it (it worked fine on one of my laptops, and crashed with a segmentation fault on the department servers (which were Solaris servers, at the time)). This is the nature of the network programming beast. You need to take this into account when planning the time you intend to spend on a programming project.

You may discuss coding assignments with your classmates, faculty, other students, etc, subject to the
empty hands policy presented below. 

When you receive coding help, you should mention that help (and who helped) in your project submission.
Regardless of how much help you received and from who, once you submit a project, it is expected that you will be able to provide me with answers to any questions regarding the code.

Finally, any help you receive from someone other than me is subject to the 
``Empty Hands'' policy --- you may freely discuss ideas and approaches with your anyone 
subject to the restriction that you must leave the discussion without any written or otherwise recorded material. Failure to comply with this policy or the guideline discussed here
will be treated as an Honor Code violation. Note that this policy does not apply to assignment/project group members (if any), with which you are free to share materials.

### Late Work Policy

Non-exam assignments may be submitted late with a **10%** deduction **per day** late, up to a maximum of four days late. 

In cases of personal illnesses, emergencies, or documented accommodations, assignments may be submitted late for full credit if you notify me of your situation.


### Attendance Policy
Regular attendance for the entire class time is expected. You should not miss more than 4 total sessions (including lecture and lab). 
   

## Class Communication

I will use two primary forms of communication in this class: email announcements and Slack. You are responsible for remaining up to date on any information sent by email or posted to Slack. This may include clarifications to assignments, updates on grading rubrics, and changes in office hours. 

For all general course information, questions, and clarifications, please use Slack. I hope that the Slack workspace can be an extension of our classroom community where we can share questions and answers for the entire class to view and learn from.

If you have personal, individual issues you'd like addressed, you should send those by email to me. However, all course related topics should be directed to Slack.


## Course Policies

### Illness policy

If you are ill and it will cause you to miss class, lab, or an assignment, you should let me know in advance, if possible. It is your responsibility to catch up with any missed material if you are able to do so.  If not, then immediately on return, work out a time-frame with me on when work will be submitted. 


### Generative AI

You will almost certainly be using generative AI in some way for the rest of your career. You may use generative AI tools for programming projects in the following manner.

You must: 
- Understand any code that you use. I reserve the right to review your submitted code with you, and ask you to explain how it works. 

You may:
- Ask a GenAI tool a generic question for informational purposes. For example, "Please explain the C++ syntax for reading input from a file, and give an example."  If you use this code, please cite the source in a comment.

You may not:
- Ask a GenAI tool to solve the assignment.  For example, you should not paste the entire problem description and ask the GenAI to solve it for you.
- No GenAI tools can be used for the exams.

This policy is subject to change as we all learn more about how GenAI works and doesn’t work as part of learning college level course content.

### Disability Services 

Any student who may need an accommodation based on the potential impact of a disability should contact [Disability Services](https://disability.richmond.edu/) (or call 804-662-5001) to establish eligibility and to coordinate reasonable accommodations. 

If you are approved for classroom and/or testing accommodation(s) please make sure to submit a Disability Accommodation Notice to me at this [link](https://disabilityportal.richmond.edu/ClockWork/user/selfregC/courses.aspx).


## Wellness

If any issue arises that may limit your ability to participate in class, for example, personal illness, family emergency, etc., please be sure to discuss these matters with me as soon as possible and accommodations will be made available to you as appropriate.

Feelings of being overwhelmed are unfortunately quite common in the university environment. You are not alone, and there are a number of resources available to provide support in those moments. Learning to ask for help is an important part of the university experience, and if you or anyone you know experiences any academic stress, difficult life events, or feelings of anxiety or depression, we strongly encourage you to seek support. UR offers counseling services, and also consider reaching out to a friend, family or faculty member you trust for help.

If you or someone you know is feeling suicidal or in danger of self-harm, call someone immediately, day or night:
* UR Counseling and Psychological Services: 804-289-8119
* University of Richmond Police: 804-289-8911 
* National Suicide Prevention Lifeline: 1-800-273-8255



## Weinstein Learning Center

[Academic Skills Center](asc.richmond.edu): Academic coaches assist students in assessing and developing their academic and life-skills (e.g., critical reading and thinking, information conceptualization, concentration, test preparation, time management, stress management, etc.). Peer tutors offer assistance in specific subject areas (e.g., calculus, chemistry, accounting, etc.) and will be available for appointments in-person and virtually. Peer tutors are listed on the ASC website. Email Roger Mancastroppa ([rmancast@richmond.edu](mailto:rmancast@richmond.edu)) and Hope Walton ([hwalton@richmond.edu](mailto:hwalton@richmond.edu)) for coaching appointments in academic and life skills.

[English Language Learning](https://llc.richmond.edu/faculty/lbohon): assists multi-lingual and international students in honing their language, academic, and/or intercultural skills. Among other available services for students are one-on-one tutoring, group workshops, and semester-long classes on writing and U.S. culture. Please contact Dr. Bohon, Director of English Language Learning, at [Leslie.Bohon@Richmond.edu](mailto:Leslie.Bohon@Richmond.edu) for more information and appointments.

[Quantitative Resource Center](https://qrc.richmond.edu): Provides services related to quantitative and computational learning across the curriculum through tutoring, consultation and training.

[Speech Center](https://speech.richmond.edu): Assists with preparation and practice in the pursuit of excellence in public expression. Recording, playback, coaching and critique sessions are offered by teams of trained student consultants. During scheduled appointments, consultants assist in developing ideas, arranging key points for more effective organization, improving style and delivery, and handling multimedia aids for individual and group presentations. We look forward to meeting your public speaking needs.

[Technology Learning Center](https://tlc.richmond.edu) The TLC is a staffed public lab dedicated to supporting digital media projects. Services include camera checkout, video/audio recording assistance, virtual reality, poster printing, 3D printing and modeling. The TLC is located on the second floor of Boatwright Library.

[Writing Center](https://writing.richmond.edu): Assists writers at all levels of experience, across all majors. Students can attend walk-in hours at Boatwright Library (room 171A) with trained writing consultants who offer friendly critiques of written work.


## Other Campus Services

[Boatwright Library Research Librarians](https://library.richmond.edu/help/ask/) (289-8876): Research librarians help students with all steps of their research, from identifying or narrowing a topic, to locating, accessing, evaluating, and citing information resources. Librarians support students in their classes across the curriculum and provide individual appointments, class library instruction, tutorials, and research guides (libguides.richmond.edu). Students can contact an individual [librarian](https://library.richmond.edu/help/liaison-librarians.html) or ASK a librarian for help via [email](mailto:library@richmond.edu), text (804-277-9ASK), or [chat](https://library.richmond.edu/chat.html).

[Career Services](https://careerservices.richmond.edu) (289-8547): Can assist you in exploring your interests and abilities, choosing a major or course of study, connecting with internships and jobs, and investigating graduate and professional school options. We encourage you to update your profile in Handshake and schedule an appointment with a career advisor early in your time at UR. 

[Counseling and Psychological Services](https://caps.richmond.edu) (289-8119): Assists currently enrolled, full-time, degree-seeking students in improving their mental health and well-being, and in handling challenges that may impede their growth and development. Services include brief consultations, short-term counseling, skills-building classes, therapy groups, crisis intervention, psychiatric consultation, and related services.

## Acknowledgments

Some of the material for this course (especially the homework assignments) comes from previous iterations taught by Prof. Prateek Bhakta. 

