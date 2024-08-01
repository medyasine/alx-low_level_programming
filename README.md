# Soft Skills Management

An application for managing soft skills training in NTT DATA.
## Table of Contents

- [Installation](#installation)
- [Prerequisites](#prerequisites)
- [Setup](#setup)
- [Features](#features)

### Prerequisites

- [JDK](https://www.oracle.com/java/)
- [Node.js](https://nodejs.org/)
- [npm](https://www.npmjs.com/)

### Setup

1. Clone the repository:
   ### 1. Backend
   ```bash
   git clone https://github.com/NTT-DATA-BECA/soft-skills-core.git
   git clone https://github.com/NTT-DATA-BECA/soft-skills-fe.git

1. setup data in Database :
   uncomment the block of inserting data in mainfile : softSkillsManagementCoreApplication.java
      and run application to insert all data in your machine

## Features 

### 1. Admin Features
- **User Management**: The admin is responsible for managing user accounts. This includes:
  - Adding new users to the system.
  - Updating existing user information.
  - Deleting user accounts.

### 2. User Manager Features
- **Group Management**: 
  - Create, update, and delete training groups.
  
- **Module Management**: 
  - Define and manage training modules focused on soft skills, including:
    - Specifying module names.
    - Setting durations.
    - Outlining necessary resources.
  - Update and delete existing modules as needed.

- **Training Session Scheduling**:
  - Schedule training sessions by:
    - Setting dates and times.
    - Specifying locations.
  
- **Automated Invitations via Teams**: 
  - Automatically send email invitations for training sessions.
  
- **Attendance Management**: 
  - Track and manage attendance of employees in training sessions.
  
- **Employee Categorization**: 
  - Group employees into categories based on specific criteria.
  
- **Absence Justification Requests**: 
  - Request justifications from employees for their absences.

- **Authentication**: 
  - Ensure proper identification of users before granting access to certain functionalities.

### 3. Coach Features
- **Module Instruction**: 
  - Responsible for teaching training modules.

- **Training Session Facilitation**: 
  - Lead and conduct training sessions, ensuring content is delivered effectively and understood by participants.

### 4. Supervisor Features
- **Employee Supervision**: 
  - Monitor employee engagement in training and work tasks.
  
- **Project Supervision**: 
  - Oversee ongoing projects to ensure they are executed efficiently and meet the set expectations.
  
- **Absence Justification Requests**: 
  - Request justifications for employee absences, ensuring proper authentication.

### 5. Employee Features
- **Receive Invitations**: 
  - Receive email invitations for scheduled training sessions.
  
- **Attend Training Sessions**: 
  - Participate in training sessions as required.
  
- **Provide Absence Justifications**: 
  - Provide justifications for any absences from training sessions or work.

