document.addEventListener('DOMContentLoaded', () => {
    const usersList = document.getElementById('usersList');
    const addUserForm = document.getElementById('addUserForm');

    // Fetch and display users
    const fetchUsers = async () => {
        try {
            const response = await fetch('https://jsonplaceholder.typicode.com/users');
            const users = await response.json();
            usersList.innerHTML = '';
            users.forEach(user => addUserToDOM(user));
        } catch (error) {
            console.error('Error fetching users:', error);
        }
    };

    // Add user to DOM
    const addUserToDOM = (user) => {
        const userDiv = document.createElement('div');
        userDiv.classList.add('user');
        userDiv.setAttribute('data-id', user.id);

        userDiv.innerHTML = `
            <span>${user.name}</span>
            <span>${user.email}</span>
            <span>
                <button class="edit">Edit</button>
                <button class="delete">Delete</button>
            </span>
        `;

        usersList.appendChild(userDiv);

        // Add event listeners for edit and delete buttons
        userDiv.querySelector('.delete').addEventListener('click', () => deleteUser(user.id));
        userDiv.querySelector('.edit').addEventListener('click', () => editUser(user.id));
    };

    // Add user
    addUserForm.addEventListener('submit', async (e) => {
        e.preventDefault();

        const name = addUserForm.name.value;
        const email = addUserForm.email.value;

        try {
            const response = await fetch('https://jsonplaceholder.typicode.com/users', {
                method: 'POST',
                body: JSON.stringify({ name, email }),
                headers: { 'Content-Type': 'application/json' },
            });

            if (response.ok) {
                const newUser = await response.json();
                addUserToDOM(newUser);
                addUserForm.reset();
            }
        } catch (error) {
            console.error('Error adding user:', error);
        }
    });

    // Delete user
    const deleteUser = async (id) => {
        try {
            const response = await fetch(`https://jsonplaceholder.typicode.com/users/${id}`, {
                method: 'DELETE',
            });

            if (response.ok) {
                const userDiv = document.querySelector(`.user[data-id='${id}']`);
                usersList.removeChild(userDiv);
            }
        } catch (error) {
            console.error('Error deleting user:', error);
        }
    };

    // Edit user

    // Update user
    const editUser = async (id) => {
        const userDiv = document.querySelector(`.user[data-id='${id}']`);
        const name = userDiv.querySelector('span').textContent;
        const email = userDiv.querySelector('span:nth-child(2)').textContent;

        const nameInput = document.getElementById('name').value = name;
        const emailInput = document.getElementById('email').value = email;

       addUserForm.addEventListener('submit', async (e) => {
            e.preventDefault();

            const name = addUserForm.name.value;
            const email = addUserForm.email.value;

            try {
                const response = await fetch(`https://jsonplaceholder.typicode.com/users/${id}`, {
                    method: 'PUT',
                    body: JSON.stringify({ name, email }),
                    headers: { 'Content-Type': 'application/json' },
                });

                if (response.ok) {
                    const updatedUser = await response.json();
                    // addUserToDOM(updatedUser);
                    addUserForm.reset();
                }
            } catch (error) {
                console.error('Error updating user:', error);
            }
        });
    }

    // Initialize the app by fetching users
    fetchUsers();
});
