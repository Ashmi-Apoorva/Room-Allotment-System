# Room Allotment System
  <p>The <strong>Room Allotment & Booking System</strong> is a simple console application written in C that allows users to manage meeting room bookings and allocate seating for occupants. This program enables you to:</p>
    <ul>
        <li>Book a room with host information, meeting date, start time, and end time.</li>
        <li>Reserve individual chairs within booked rooms.</li>
        <li>View the status of a specific room, including the host, date, time, and occupant list.</li>
        <li>Check the availability of rooms and chairs at any time.</li>
    </ul>
    <h2>Features</h2>
    <ol>
        <li><strong>Room Booking</strong>: Allocate a meeting room by specifying the host, date, start time, and end time.</li>
        <li><strong>Chair Reservation</strong>: After booking a room, users can reserve individual chairs by entering occupant names.</li>
        <li><strong>Room Status Overview</strong>: View the details of a room, including availability status and occupant list per chair.</li>
        <li><strong>Availability Check</strong>: Lists all rooms with the number of available chairs, allowing easy checking of room and chair availability.</li>
        <li><strong>Error Handling</strong>: Input validation is performed to ensure correct data entry, and users are guided to enter valid information where needed.</li>
    </ol>
    <h2>Code Structure</h2>
    <ul>
        <li><strong>Main Functions</strong>
            <ul>
                <li><code>book()</code>: Books a room and saves host and meeting details.</li>
                <li><code>allot()</code>: Allocates a chair within a booked room for an occupant.</li>
                <li><code>show()</code>: Displays the status of a specified room, including occupant seating.</li>
                <li><code>check_avail()</code>: Lists all rooms and their available chairs.</li>
            </ul>
        </li>
        <li><strong>Helper Functions</strong>
            <ul>
                <li><code>printer()</code>: Prints a visual divider for console output.</li>
            </ul>
        </li>
        <li><strong>Main Loop</strong>: Offers users a menu to select options such as booking, allotting, checking room status, or exiting the application.</li>
    </ul>
    <div class="divider"></div>
    <h2>Getting Started</h2>
    <h3>Prerequisites</h3>
    <p>You will need a C compiler (e.g., GCC) to run the application.</p>
    <h3>Running the Program</h3>
    <ol>
        <li>Clone this repository.</li>
        <li>Compile the code:
            <pre><code>gcc room_allotment.c -o room_allotment</code></pre>
        </li>
        <li>Run the program:
            <pre><code>./room_allotment</code></pre>
        </li>
    </ol>
    <h3>Usage</h3>
    <ul>
        <li><strong>Book a Room</strong>: Choose option <code>1</code> and follow prompts to book a room.</li>
        <li><strong>Allot a Chair</strong>: Choose option <code>2</code> and follow prompts to allocate a chair.</li>
        <li><strong>Show Room Status</strong>: Choose option <code>3</code> to view details of a booked room.</li>
        <li><strong>Check Availability</strong>: Choose option <code>4</code> to view all rooms and available chairs.</li>
        <li><strong>Exit</strong>: Choose option <code>5</code> to exit the application.</li>
    </ul>
    <h2>Example Output</h2>
    <img width="650" alt="Screenshot (869)" src="https://github.com/user-attachments/assets/2670d785-a131-4d09-932f-df4bd5f9005a">
    <img width="666" alt="Screenshot (870)" src="https://github.com/user-attachments/assets/2a098d34-4f8a-4f3e-9d0c-645bf99150eb">
<img width="657" alt="Screenshot (871)" src="https://github.com/user-attachments/assets/c7011b27-edb0-4b69-8617-bb2ae1563aec">
  <img width="636" alt="Screenshot (872)" src="https://github.com/user-attachments/assets/7dd0ea86-f506-4234-bbf9-5d7fd88799ef">
    <h2>Limitations</h2>
    <ul>
        <li>Supports up to 10 rooms and 32 chairs per room.</li>
        <li>Does not persist data after program termination.</li>
    </ul>

